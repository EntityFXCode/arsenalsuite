
#ifndef MODEL_GROUPER_H
#define MODEL_GROUPER_H

#include <qabstractitemmodel.h>
#include <qlist.h>
#include <qmap.h>
#include <qregexp.h>
#include <qobject.h>

#include "stonegui.h"

class SuperModel;
class ModelDataTranslator;
class StandardItem;
template<class TYPE, class BASE> class TemplateDataTranslator;
typedef TemplateDataTranslator<StandardItem,ModelDataTranslator> StandardTranslator;

class STONEGUI_EXPORT ModelGrouper : public QObject
{
Q_OBJECT
public:
	ModelGrouper( SuperModel * model );
	
	enum GroupItemRoles {
		// These two are passed via setData to each grouping item that is created
		GroupingColumn = Qt::UserRole + 1,
		GroupingValue = Qt::UserRole + 2,
		// This one is passed via setData each time a grouping item has a change in
		// it's children, either rows added/removed, or dataChange.  Also called
		// when the grouping item is created
		GroupingUpdate = Qt::UserRole + 3
	};
	
	enum EmptyGroupPolicy {
		// This requires ExtTreeView, or your view to listen to the groupEmptied and
		// groupPopulated signals and respond appropriately
		HideEmptyGroups,
		RemoveEmptyGroups,
		LeaveEmptyGroups
	};
	
	SuperModel * model() const { return mModel; }
	ModelDataTranslator * groupedItemTranslator() const;
	void setGroupedItemTranslator( ModelDataTranslator * trans );
	
	bool isGrouped() const { return mIsGrouped; }
	int groupColumn() const { return mGroupColumn; }
	
	void groupByColumn( int column );
	void ungroup();

	// If a regex is set on a column, the first capture is used as the group value
	void setColumnGroupRegex( int column, const QRegExp & = QRegExp() );
	QRegExp columnGroupRegex( int column ) const;
	
	QString groupValue( const QModelIndex & idx );

	EmptyGroupPolicy emptyGroupPolicy() const;
	void setEmptyGroupPolicy( EmptyGroupPolicy policy );
	
	// Opening new groups requires the view to connect to the groupCreated
	// signal and honor this setting. Automatically done by ExtTreeView/RecordTreeView
	void setExpandNewGroups(bool openNewGroups);
	bool expandNewGroups() const;
	
signals:
	void groupingChanged( bool grouped );
	void grouped();
	void ungrouped();
	
	// Emitted whenever a new group item is created
	void groupCreated( const QModelIndex & );
	// Emitted when a group item becomes empty
	void groupEmptied( const QModelIndex & );
	// Emitted when an existing empty group item has new grouped children
	void groupPopulated( const QModelIndex & );
	
protected slots:
	void slotRowsInserted( const QModelIndex & parent, int start, int end );
	void slotRowsRemoved( const QModelIndex & parent, int start, int end );
	void slotDataChanged( const QModelIndex & topLeft, const QModelIndex & bottomRight );
	void slotUpdate();
	
protected:
	void groupRows( int start, int end );
	void scheduleUpdate();

	typedef QMap<QString,QList<QPersistentModelIndex> > GroupMap;
	void group( GroupMap & gm );
	
	SuperModel * mModel;
	StandardTranslator * mStandardTranslator;
	ModelDataTranslator * mCustomTranslator;
	int mGroupColumn;
	bool mIsGrouped, mInsertingGroupItems, mUpdateScheduled;
	QList<QPersistentModelIndex> mGroupItemsToUpdate, mItemsToRegroup;
	typedef QMap<int,QRegExp> ColumnRegexMap;
	ColumnRegexMap mColumnRegexMap;
	EmptyGroupPolicy mEmptyGroupPolicy;
	bool mExpandNewGroups;
};


#endif // MODEL_GROUPER_H
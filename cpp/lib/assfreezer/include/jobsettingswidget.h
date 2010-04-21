
/* $Header$
 */

#ifndef JOB_SETTINGS_WIDGET_H
#define JOB_SETTINGS_WIDGET_H

#include <qwidget.h>

#include "jobtype.h"
#include "job.h"

#include "afcommon.h"

#include "ui_jobsettingswidgetui.h"

class CustomJobSettingsWidget;
class Stone::RecordProxy;
using namespace Stone;

class CustomJobSettingsWidget;

/**
 * Widget for settings that are shared by all job types
 * Also handles showing the correct CustomJobSettingsWidget for
 * the selected jobs.
 **/
class ASSFREEZER_EXPORT JobSettingsWidget : public QWidget, public Ui::JobSettingsWidgetUI
{
Q_OBJECT
public:

	enum Mode {
		SubmitJobs,
		ModifyJobs
	};

	JobSettingsWidget( QWidget * parent, Mode mode = ModifyJobs );
	virtual ~JobSettingsWidget();

	Mode mode() const { return mMode; }

	void setSelectedJobs( JobList selected );
	JobList selectedJobs() const { return mSelectedJobs; }

	CustomJobSettingsWidget * currentCustomWidget();

public slots:
	void resetSettings();
	void applySettings();
	void settingsChange();
	void setAutoPacketSize(int checkState);
	void showHostSelector();
	void showEnvironmentWindow();

signals:
	void customJobSettingsWidgetCreated( CustomJobSettingsWidget * );

protected:

	void updateCustomJobSettingsWidget();

	Mode mMode;
	bool mChanges;
	// Used to ignore changes that are done internally, to avoid infinite recursion
	bool mIgnoreChanges;
	QString mUpdatedHostList;
	QString mUpdatedEnvironment;

	JobList mSelectedJobs;
	RecordProxy * mSelectedJobsProxy;
	QMap<QString, CustomJobSettingsWidget*> mCustomJobSettingsWidgetMap;
};

class ASSFREEZER_EXPORT JobServiceBridge
{
public:
	virtual ~JobServiceBridge(){}
	virtual JobServiceList getJobServices( const Job & ) = 0;
	virtual void removeJobServices( const Job &, JobServiceList ) = 0;
	virtual void applyJobServices( const Job &, JobServiceList ) = 0;
};

/**
 *  To be implemented for each job type's own settings
 *  Sits to the right of the JobSettingsWidget
 */
class ASSFREEZER_EXPORT CustomJobSettingsWidget : public QGroupBox
{
Q_OBJECT
public:
	CustomJobSettingsWidget( QWidget * parent, JobSettingsWidget::Mode mode = JobSettingsWidget::ModifyJobs );
	virtual ~CustomJobSettingsWidget();

	JobSettingsWidget::Mode mode() const { return mMode; }

	virtual QStringList supportedJobTypes()=0;

	void setSelectedJobs( JobList selected );
	JobList selectedJobs() const { return mSelectedJobs; }

	JobServiceList getJobServices( const Job & );
	void removeJobServices( const Job &, JobServiceList );
	void applyJobServices( const Job &, JobServiceList );

	void setJobServiceBridge( JobServiceBridge * );

public slots:
	virtual void resetSettings();
	virtual void applySettings();
	virtual void settingsChange();

protected:
	JobServiceBridge * mJobServiceBridge;
	QHBoxLayout * mApplyResetLayout;
	QPushButton * mApplySettingsButton, * mResetSettingsButton;

	JobSettingsWidget::Mode mMode;

	JobList mSelectedJobs;
	bool mChanges;
};

#endif // JOB_SETTINGS_WIDGET_H


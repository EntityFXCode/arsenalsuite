
/*
 *
 * Copyright 2003 Blur Studio Inc.
 *
 * This file is part of Assburner.
 *
 * Assburner is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Assburner is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Blur; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* $Header$
 */

#ifndef TAB_TOOL_BAR_H
#define TAB_TOOL_BAR_H

#include <qwidget.h>

#include "afcommon.h"

class QTabWidget;
class QPushButton;
class QComboBox;
class QCheckBox;
class ImageView;

class ASSFREEZER_EXPORT TabToolBar : public QWidget
{
Q_OBJECT
public:
	TabToolBar( QTabWidget * parent, ImageView * );

public slots:
	void slotPlay();
	void slotPause();
	void slotScaleComboChange( const QString & );
	void slotFreeScaleToggled( bool );
	void slotSetScaleFactor( float sf );
	void slotScaleModeChanged( int );

protected:
	virtual bool eventFilter( QObject *, QEvent * );

	QPushButton * mNext, * mPrev, * mAlpha, * mPlay, * mPause;
	QComboBox * mScaleCombo;
	QCheckBox * mFreeScaleCheck;
	ImageView * mImageView;
};


#endif // TAB_TOOL_BAR_H




/*
 *
 * Copyright 2003 Blur Studio Inc.
 *
 * This file is part of libstone.
 *
 * libstone is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * libstone is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libstone; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/*
 * $Id: lostconnectiondialog.h 10005 2010-06-17 00:12:01Z newellm $
 */

#ifndef LOST_CONNECTION_DIALOG_H
#define LOST_CONNECTION_DIALOG_H

#include "ui_lostconnectiondialogui.h"
#include "stonegui.h"

class QTimer;
namespace Stone {
class Connection;
}
using namespace Stone;

class STONEGUI_EXPORT LostConnectionDialog : public QDialog
{
Q_OBJECT
public:
	LostConnectionDialog( Connection * c, const QString & errorMsg );

protected slots:

	// Override to prevent the user clicking the x close button
	virtual void reject();
	
	void retryConnection();
	void retryNow();
	void quit();
	void showSettings();
	
protected:
	Connection * mConnection;
	QTimer * mTimer;
	int mSecondsToRetry;
	Ui::LostConnectionDialogUI mUI;
};

#endif // LOST_CONNECTION_DIALOG_H


/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:25 2010
 *
 * Copyright (c) 2009 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 125 "sip/QtGui/qboxlayout.sip"
#include <qboxlayout.h>
#line 39 "sipQtGuiQVBoxLayout.cpp"

#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 43 "sipQtGuiQVBoxLayout.cpp"
#line 37 "sip/QtGui/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 46 "sipQtGuiQVBoxLayout.cpp"
#line 79 "sip/QtGui/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 49 "sipQtGuiQVBoxLayout.cpp"
#line 41 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 52 "sipQtGuiQVBoxLayout.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtGuiQVBoxLayout.cpp"
#line 41 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 58 "sipQtGuiQVBoxLayout.cpp"
#line 37 "sip/QtGui/qlayout.sip"
#include <qlayout.h>
#line 61 "sipQtGuiQVBoxLayout.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 64 "sipQtGuiQVBoxLayout.cpp"
#line 37 "sip/QtGui/qboxlayout.sip"
#include <qboxlayout.h>
#line 67 "sipQtGuiQVBoxLayout.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 70 "sipQtGuiQVBoxLayout.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 73 "sipQtGuiQVBoxLayout.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 76 "sipQtGuiQVBoxLayout.cpp"
#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 79 "sipQtGuiQVBoxLayout.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 82 "sipQtGuiQVBoxLayout.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 85 "sipQtGuiQVBoxLayout.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 88 "sipQtGuiQVBoxLayout.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 91 "sipQtGuiQVBoxLayout.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 94 "sipQtGuiQVBoxLayout.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 97 "sipQtGuiQVBoxLayout.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 100 "sipQtGuiQVBoxLayout.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 103 "sipQtGuiQVBoxLayout.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 106 "sipQtGuiQVBoxLayout.cpp"
#line 41 "sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 109 "sipQtGuiQVBoxLayout.cpp"


class sipQVBoxLayout : public QVBoxLayout
{
public:
    sipQVBoxLayout();
    sipQVBoxLayout(QWidget *);
    virtual ~sipQVBoxLayout();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);
    void sipProtect_widgetEvent(QEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtect_addChildLayout(QLayout *);
    void sipProtect_addChildWidget(QWidget *);
    QRect sipProtect_alignmentRect(const QRect&) const;
    void sipProtect_insertItem(int,QLayoutItem *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void addItem(QLayoutItem *);
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    int minimumHeightForWidth(int) const;
    Qt::Orientations expandingDirections() const;
    void invalidate();
    QLayoutItem * itemAt(int) const;
    QLayoutItem * takeAt(int);
    int count() const;
    void setGeometry(const QRect&);
    QRect geometry() const;
    int indexOf(QWidget *) const;
    bool isEmpty() const;
    QLayout * layout();
    void childEvent(QChildEvent *);
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);
    QWidget * widget();
    QSpacerItem * spacerItem();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQVBoxLayout(const sipQVBoxLayout &);
    sipQVBoxLayout &operator = (const sipQVBoxLayout &);

    char sipPyMethods[26];
};

sipQVBoxLayout::sipQVBoxLayout(): QVBoxLayout(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQVBoxLayout::sipQVBoxLayout(QWidget *a0): QVBoxLayout(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQVBoxLayout::~sipQVBoxLayout()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQVBoxLayout::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QVBoxLayout);
}

int sipQVBoxLayout::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QVBoxLayout::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QVBoxLayout,_c,_id,_a);

    return _id;
}

void *sipQVBoxLayout::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast && sip_QtGui_qt_metacast(sipPySelf,sipType_QVBoxLayout,_clname)) ? this : QVBoxLayout::qt_metacast(_clname);
}

void sipQVBoxLayout::addItem(QLayoutItem *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_addItem);

    if (!meth)
    {
        QBoxLayout::addItem(a0);
        return;
    }

    extern void sipVH_QtGui_106(sip_gilstate_t,PyObject *,bool*,QLayoutItem *);

    sipVH_QtGui_106(sipGILState,meth,0,a0);
}

QSize sipQVBoxLayout::sizeHint() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_sizeHint);

    if (!meth)
        return QBoxLayout::sizeHint();

    extern QSize sipVH_QtGui_4(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_4(sipGILState,meth,0);
}

QSize sipQVBoxLayout::minimumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_minimumSize);

    if (!meth)
        return QBoxLayout::minimumSize();

    extern QSize sipVH_QtGui_4(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_4(sipGILState,meth,0);
}

QSize sipQVBoxLayout::maximumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_maximumSize);

    if (!meth)
        return QBoxLayout::maximumSize();

    extern QSize sipVH_QtGui_4(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_4(sipGILState,meth,0);
}

bool sipQVBoxLayout::hasHeightForWidth() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_hasHeightForWidth);

    if (!meth)
        return QBoxLayout::hasHeightForWidth();

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtGui_QtCore->em_virthandlers[1]))(sipGILState,meth,0);
}

int sipQVBoxLayout::heightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_heightForWidth);

    if (!meth)
        return QBoxLayout::heightForWidth(a0);

    extern int sipVH_QtGui_29(sip_gilstate_t,PyObject *,bool*,int);

    return sipVH_QtGui_29(sipGILState,meth,0,a0);
}

int sipQVBoxLayout::minimumHeightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_minimumHeightForWidth);

    if (!meth)
        return QBoxLayout::minimumHeightForWidth(a0);

    extern int sipVH_QtGui_29(sip_gilstate_t,PyObject *,bool*,int);

    return sipVH_QtGui_29(sipGILState,meth,0,a0);
}

Qt::Orientations sipQVBoxLayout::expandingDirections() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_expandingDirections);

    if (!meth)
        return QBoxLayout::expandingDirections();

    extern Qt::Orientations sipVH_QtGui_156(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_156(sipGILState,meth,0);
}

void sipQVBoxLayout::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_invalidate);

    if (!meth)
    {
        QBoxLayout::invalidate();
        return;
    }

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

QLayoutItem * sipQVBoxLayout::itemAt(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_itemAt);

    if (!meth)
        return QBoxLayout::itemAt(a0);

    extern QLayoutItem * sipVH_QtGui_105(sip_gilstate_t,PyObject *,bool*,int);

    return sipVH_QtGui_105(sipGILState,meth,0,a0);
}

QLayoutItem * sipQVBoxLayout::takeAt(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_takeAt);

    if (!meth)
        return QBoxLayout::takeAt(a0);

    extern QLayoutItem * sipVH_QtGui_104(sip_gilstate_t,PyObject *,bool*,int);

    return sipVH_QtGui_104(sipGILState,meth,0,a0);
}

int sipQVBoxLayout::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_count);

    if (!meth)
        return QBoxLayout::count();

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth,0);
}

void sipQVBoxLayout::setGeometry(const QRect& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_setGeometry);

    if (!meth)
    {
        QBoxLayout::setGeometry(a0);
        return;
    }

    extern void sipVH_QtGui_103(sip_gilstate_t,PyObject *,bool*,const QRect&);

    sipVH_QtGui_103(sipGILState,meth,0,a0);
}

QRect sipQVBoxLayout::geometry() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,NULL,sipName_geometry);

    if (!meth)
        return QLayout::geometry();

    extern QRect sipVH_QtGui_155(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_155(sipGILState,meth,0);
}

int sipQVBoxLayout::indexOf(QWidget *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,NULL,sipName_indexOf);

    if (!meth)
        return QLayout::indexOf(a0);

    extern int sipVH_QtGui_159(sip_gilstate_t,PyObject *,bool*,QWidget *);

    return sipVH_QtGui_159(sipGILState,meth,0,a0);
}

bool sipQVBoxLayout::isEmpty() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,NULL,sipName_isEmpty);

    if (!meth)
        return QLayout::isEmpty();

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtGui_QtCore->em_virthandlers[1]))(sipGILState,meth,0);
}

QLayout * sipQVBoxLayout::layout()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_layout);

    if (!meth)
        return QLayout::layout();

    extern QLayout * sipVH_QtGui_158(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_158(sipGILState,meth,0);
}

void sipQVBoxLayout::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[17],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QLayout::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtGui_QtCore->em_virthandlers[19]))(sipGILState,meth,0,a0);
}

bool sipQVBoxLayout::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtGui_QtCore->em_virthandlers[12]))(sipGILState,meth,0,a0);
}

bool sipQVBoxLayout::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtGui_QtCore->em_virthandlers[20]))(sipGILState,meth,0,a0,a1);
}

void sipQVBoxLayout::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[20],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtGui_QtCore->em_virthandlers[3]))(sipGILState,meth,0,a0);
}

void sipQVBoxLayout::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[21],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState,meth,0,a0);
}

void sipQVBoxLayout::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[22],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

void sipQVBoxLayout::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[23],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

QWidget * sipQVBoxLayout::widget()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[24],sipPySelf,NULL,sipName_widget);

    if (!meth)
        return QLayoutItem::widget();

    extern QWidget * sipVH_QtGui_107(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_107(sipGILState,meth,0);
}

QSpacerItem * sipQVBoxLayout::spacerItem()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[25],sipPySelf,NULL,sipName_spacerItem);

    if (!meth)
        return QLayoutItem::spacerItem();

    extern QSpacerItem * sipVH_QtGui_157(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_157(sipGILState,meth,0);
}

int sipQVBoxLayout::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQVBoxLayout::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQVBoxLayout::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQVBoxLayout::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQVBoxLayout::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

void sipQVBoxLayout::sipProtect_widgetEvent(QEvent *a0)
{
    QLayout::widgetEvent(a0);
}

void sipQVBoxLayout::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QLayout::childEvent(a0) : childEvent(a0));
}

void sipQVBoxLayout::sipProtect_addChildLayout(QLayout *a0)
{
    QLayout::addChildLayout(a0);
}

void sipQVBoxLayout::sipProtect_addChildWidget(QWidget *a0)
{
    QLayout::addChildWidget(a0);
}

QRect sipQVBoxLayout::sipProtect_alignmentRect(const QRect& a0) const
{
    return QLayout::alignmentRect(a0);
}

void sipQVBoxLayout::sipProtect_insertItem(int a0,QLayoutItem *a1)
{
    QBoxLayout::insertItem(a0,a1);
}


extern "C" {static PyObject *meth_QVBoxLayout_receivers(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QVBoxLayout,&sipCpp,&a0))
        {
            int sipRes = 0;

#line 480 "sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
#line 711 "sipQtGuiQVBoxLayout.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QVBoxLayout,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QVBoxLayout,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QVBoxLayout,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QVBoxLayout,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_widgetEvent(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_widgetEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QEvent * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QVBoxLayout,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_widgetEvent(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_widgetEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QVBoxLayout,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_addChildLayout(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_addChildLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QLayout * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ:",&sipSelf,sipType_QVBoxLayout,&sipCpp,sipType_QLayout,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_addChildLayout(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_addChildLayout);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_addChildWidget(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_addChildWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QWidget * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ:",&sipSelf,sipType_QVBoxLayout,&sipCpp,sipType_QWidget,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_addChildWidget(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_addChildWidget);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_alignmentRect(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_alignmentRect(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QRect * a0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ9",&sipSelf,sipType_QVBoxLayout,&sipCpp,sipType_QRect,&a0))
        {
            QRect *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->sipProtect_alignmentRect(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_alignmentRect);

    return NULL;
}


extern "C" {static PyObject *meth_QVBoxLayout_insertItem(PyObject *, PyObject *);}
static PyObject *meth_QVBoxLayout_insertItem(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QLayoutItem * a1;
        sipWrapper *sipOwner = 0;
        sipQVBoxLayout *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"piJH",&sipSelf,sipType_QVBoxLayout,&sipCpp,&a0,sipType_QLayoutItem,&a1,&sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_insertItem(a0,a1);
            Py_END_ALLOW_THREADS

            if (sipOwner)
                sipTransferTo(sipSelf, (PyObject *)sipOwner);
            else
                sipTransferBack(sipSelf);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QVBoxLayout,sipName_insertItem);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QVBoxLayout(void *, const sipTypeDef *);}
static void *cast_QVBoxLayout(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QVBoxLayout)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QBoxLayout)->ctd_cast((QBoxLayout *)(QVBoxLayout *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QVBoxLayout(void *, int);}
static void release_QVBoxLayout(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQVBoxLayout *>(sipCppV);
    else
        delete reinterpret_cast<QVBoxLayout *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QVBoxLayout(sipSimpleWrapper *);}
static void dealloc_QVBoxLayout(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQVBoxLayout *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QVBoxLayout(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QVBoxLayout(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QVBoxLayout(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQVBoxLayout *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQVBoxLayout();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        QWidget * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JH",sipType_QWidget,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQVBoxLayout(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QVBoxLayout[] = {{42, 255, 1}};


static PyMethodDef methods_QVBoxLayout[] = {
    {SIP_MLNAME_CAST(sipName_addChildLayout), meth_QVBoxLayout_addChildLayout, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_addChildWidget), meth_QVBoxLayout_addChildWidget, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_alignmentRect), meth_QVBoxLayout_alignmentRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QVBoxLayout_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QVBoxLayout_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QVBoxLayout_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QVBoxLayout_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insertItem), meth_QVBoxLayout_insertItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QVBoxLayout_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QVBoxLayout_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_widgetEvent), meth_QVBoxLayout_widgetEvent, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QVBoxLayout = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QVBoxLayout,
        {0}
    },
    {
        sipNameNr_QVBoxLayout,
        {0, 0, 1},
        11, methods_QVBoxLayout,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QVBoxLayout,
    0,
    init_QVBoxLayout,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QVBoxLayout,
    0,
    0,
    0,
    release_QVBoxLayout,
    cast_QVBoxLayout,
    0,
    0,
    0
},
    &QVBoxLayout::staticMetaObject,
    0,
    0
};

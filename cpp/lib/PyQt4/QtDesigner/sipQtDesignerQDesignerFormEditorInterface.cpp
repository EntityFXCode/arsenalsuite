/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:41 2010
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

#include "sipAPIQtDesigner.h"

#line 37 "sip/QtDesigner/abstractformeditor.sip"
#include <abstractformeditor.h>
#line 39 "sipQtDesignerQDesignerFormEditorInterface.cpp"

#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtDesigner/abstractactioneditor.sip"
#include <abstractactioneditor.h>
#line 46 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtDesigner/abstractobjectinspector.sip"
#include <abstractobjectinspector.h>
#line 49 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtDesigner/abstractpropertyeditor.sip"
#include <abstractpropertyeditor.h>
#line 52 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtDesigner/abstractwidgetbox.sip"
#include <abstractwidgetbox.h>
#line 55 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtDesigner/abstractformwindowmanager.sip"
#include <abstractformwindowmanager.h>
#line 58 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 61 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtDesigner/qextensionmanager.sip"
#include <qextensionmanager.h>
#line 64 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 67 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 70 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 73 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 76 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 79 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 82 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 85 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 88 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 91 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 94 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 97 "sipQtDesignerQDesignerFormEditorInterface.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 100 "sipQtDesignerQDesignerFormEditorInterface.cpp"


class sipQDesignerFormEditorInterface : public QDesignerFormEditorInterface
{
public:
    sipQDesignerFormEditorInterface(QObject *);
    virtual ~sipQDesignerFormEditorInterface();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerFormEditorInterface(const sipQDesignerFormEditorInterface &);
    sipQDesignerFormEditorInterface &operator = (const sipQDesignerFormEditorInterface &);

    char sipPyMethods[7];
};

sipQDesignerFormEditorInterface::sipQDesignerFormEditorInterface(QObject *a0): QDesignerFormEditorInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerFormEditorInterface::~sipQDesignerFormEditorInterface()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDesignerFormEditorInterface::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QDesignerFormEditorInterface);
}

int sipQDesignerFormEditorInterface::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QDesignerFormEditorInterface::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QDesignerFormEditorInterface,_c,_id,_a);

    return _id;
}

void *sipQDesignerFormEditorInterface::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast && sip_QtDesigner_qt_metacast(sipPySelf,sipType_QDesignerFormEditorInterface,_clname)) ? this : QDesignerFormEditorInterface::qt_metacast(_clname);
}

bool sipQDesignerFormEditorInterface::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[12]))(sipGILState,meth,0,a0);
}

bool sipQDesignerFormEditorInterface::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[20]))(sipGILState,meth,0,a0,a1);
}

void sipQDesignerFormEditorInterface::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[3]))(sipGILState,meth,0,a0);
}

void sipQDesignerFormEditorInterface::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[19]))(sipGILState,meth,0,a0);
}

void sipQDesignerFormEditorInterface::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[18]))(sipGILState,meth,0,a0);
}

void sipQDesignerFormEditorInterface::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

void sipQDesignerFormEditorInterface::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

int sipQDesignerFormEditorInterface::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQDesignerFormEditorInterface::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQDesignerFormEditorInterface::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQDesignerFormEditorInterface::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQDesignerFormEditorInterface::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQDesignerFormEditorInterface::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_receivers(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,&a0))
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
#line 353 "sipQtDesignerQDesignerFormEditorInterface.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_extensionManager(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_extensionManager(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp))
        {
            QExtensionManager *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->extensionManager();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QExtensionManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_extensionManager);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_topLevel(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_topLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp))
        {
            QWidget *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->topLevel();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_topLevel);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_widgetBox(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_widgetBox(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp))
        {
            QDesignerWidgetBoxInterface *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->widgetBox();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QDesignerWidgetBoxInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_widgetBox);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_propertyEditor(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_propertyEditor(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp))
        {
            QDesignerPropertyEditorInterface *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->propertyEditor();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QDesignerPropertyEditorInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_propertyEditor);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_objectInspector(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_objectInspector(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp))
        {
            QDesignerObjectInspectorInterface *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->objectInspector();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QDesignerObjectInspectorInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_objectInspector);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_formWindowManager(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_formWindowManager(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp))
        {
            QDesignerFormWindowManagerInterface *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->formWindowManager();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QDesignerFormWindowManagerInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_formWindowManager);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_actionEditor(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_actionEditor(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp))
        {
            QDesignerActionEditorInterface *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->actionEditor();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QDesignerActionEditorInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_actionEditor);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_setWidgetBox(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_setWidgetBox(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerWidgetBoxInterface * a0;
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,sipType_QDesignerWidgetBoxInterface,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidgetBox(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_setWidgetBox);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_setPropertyEditor(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_setPropertyEditor(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerPropertyEditorInterface * a0;
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,sipType_QDesignerPropertyEditorInterface,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPropertyEditor(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_setPropertyEditor);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_setObjectInspector(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_setObjectInspector(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerObjectInspectorInterface * a0;
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,sipType_QDesignerObjectInspectorInterface,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setObjectInspector(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_setObjectInspector);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerFormEditorInterface_setActionEditor(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormEditorInterface_setActionEditor(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDesignerActionEditorInterface * a0;
        QDesignerFormEditorInterface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QDesignerFormEditorInterface,&sipCpp,sipType_QDesignerActionEditorInterface,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setActionEditor(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDesignerFormEditorInterface,sipName_setActionEditor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerFormEditorInterface(void *, const sipTypeDef *);}
static void *cast_QDesignerFormEditorInterface(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDesignerFormEditorInterface)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QDesignerFormEditorInterface *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerFormEditorInterface(void *, int);}
static void release_QDesignerFormEditorInterface(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerFormEditorInterface *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerFormEditorInterface *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerFormEditorInterface(sipSimpleWrapper *);}
static void dealloc_QDesignerFormEditorInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerFormEditorInterface *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerFormEditorInterface(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QDesignerFormEditorInterface(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QDesignerFormEditorInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQDesignerFormEditorInterface *sipCpp = 0;

    if (!sipCpp)
    {
        QObject * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|JH",sipType_QObject,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerFormEditorInterface(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDesignerFormEditorInterface[] = {{111, 0, 1}};


static PyMethodDef methods_QDesignerFormEditorInterface[] = {
    {SIP_MLNAME_CAST(sipName_actionEditor), meth_QDesignerFormEditorInterface_actionEditor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QDesignerFormEditorInterface_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QDesignerFormEditorInterface_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QDesignerFormEditorInterface_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QDesignerFormEditorInterface_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_extensionManager), meth_QDesignerFormEditorInterface_extensionManager, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_formWindowManager), meth_QDesignerFormEditorInterface_formWindowManager, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_objectInspector), meth_QDesignerFormEditorInterface_objectInspector, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_propertyEditor), meth_QDesignerFormEditorInterface_propertyEditor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QDesignerFormEditorInterface_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setActionEditor), meth_QDesignerFormEditorInterface_setActionEditor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setObjectInspector), meth_QDesignerFormEditorInterface_setObjectInspector, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPropertyEditor), meth_QDesignerFormEditorInterface_setPropertyEditor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWidgetBox), meth_QDesignerFormEditorInterface_setWidgetBox, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QDesignerFormEditorInterface_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_topLevel), meth_QDesignerFormEditorInterface_topLevel, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_widgetBox), meth_QDesignerFormEditorInterface_widgetBox, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerFormEditorInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDesignerFormEditorInterface,
        {0}
    },
    {
        sipNameNr_QDesignerFormEditorInterface,
        {0, 0, 1},
        17, methods_QDesignerFormEditorInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QDesignerFormEditorInterface,
    0,
    init_QDesignerFormEditorInterface,
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
    dealloc_QDesignerFormEditorInterface,
    0,
    0,
    0,
    release_QDesignerFormEditorInterface,
    cast_QDesignerFormEditorInterface,
    0,
    0,
    0
},
    &QDesignerFormEditorInterface::staticMetaObject,
    0,
    0
};

/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:27 2010
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

#include "sipAPIQtNetwork.h"

#line 39 "sip/QtNetwork/qnetworkdiskcache.sip"
#include <qnetworkdiskcache.h>
#line 39 "sipQtNetworkQNetworkDiskCache.cpp"

#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtNetworkQNetworkDiskCache.cpp"
#line 154 "sip/QtNetwork/qabstractnetworkcache.sip"
#include <qabstractnetworkcache.h>
#line 46 "sipQtNetworkQNetworkDiskCache.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "sipQtNetworkQNetworkDiskCache.cpp"
#line 41 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 52 "sipQtNetworkQNetworkDiskCache.cpp"
#line 41 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 55 "sipQtNetworkQNetworkDiskCache.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtNetworkQNetworkDiskCache.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtNetworkQNetworkDiskCache.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 64 "sipQtNetworkQNetworkDiskCache.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 67 "sipQtNetworkQNetworkDiskCache.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtNetworkQNetworkDiskCache.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 73 "sipQtNetworkQNetworkDiskCache.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 76 "sipQtNetworkQNetworkDiskCache.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 79 "sipQtNetworkQNetworkDiskCache.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 82 "sipQtNetworkQNetworkDiskCache.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 85 "sipQtNetworkQNetworkDiskCache.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 88 "sipQtNetworkQNetworkDiskCache.cpp"


class sipQNetworkDiskCache : public QNetworkDiskCache
{
public:
    sipQNetworkDiskCache(QObject *);
    virtual ~sipQNetworkDiskCache();

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
    qint64 sipProtectVirt_expire(bool);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    qint64 cacheSize() const;
    QNetworkCacheMetaData metaData(const QUrl&);
    void updateMetaData(const QNetworkCacheMetaData&);
    QIODevice * data(const QUrl&);
    bool remove(const QUrl&);
    QIODevice * prepare(const QNetworkCacheMetaData&);
    void insert(QIODevice *);
    void clear();
    qint64 expire();
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
    sipQNetworkDiskCache(const sipQNetworkDiskCache &);
    sipQNetworkDiskCache &operator = (const sipQNetworkDiskCache &);

    char sipPyMethods[16];
};

sipQNetworkDiskCache::sipQNetworkDiskCache(QObject *a0): QNetworkDiskCache(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkDiskCache::~sipQNetworkDiskCache()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQNetworkDiskCache::metaObject() const
{
    return sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QNetworkDiskCache);
}

int sipQNetworkDiskCache::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QNetworkDiskCache::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QNetworkDiskCache,_c,_id,_a);

    return _id;
}

void *sipQNetworkDiskCache::qt_metacast(const char *_clname)
{
    return (sip_QtNetwork_qt_metacast && sip_QtNetwork_qt_metacast(sipPySelf,sipType_QNetworkDiskCache,_clname)) ? this : QNetworkDiskCache::qt_metacast(_clname);
}

qint64 sipQNetworkDiskCache::cacheSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_cacheSize);

    if (!meth)
        return QNetworkDiskCache::cacheSize();

    typedef PY_LONG_LONG (*sipVH_QtCore_15)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_15)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[15]))(sipGILState,meth,0);
}

QNetworkCacheMetaData sipQNetworkDiskCache::metaData(const QUrl& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_metaData);

    if (!meth)
        return QNetworkDiskCache::metaData(a0);

    extern QNetworkCacheMetaData sipVH_QtNetwork_11(sip_gilstate_t,PyObject *,bool*,const QUrl&);

    return sipVH_QtNetwork_11(sipGILState,meth,0,a0);
}

void sipQNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_updateMetaData);

    if (!meth)
    {
        QNetworkDiskCache::updateMetaData(a0);
        return;
    }

    extern void sipVH_QtNetwork_10(sip_gilstate_t,PyObject *,bool*,const QNetworkCacheMetaData&);

    sipVH_QtNetwork_10(sipGILState,meth,0,a0);
}

QIODevice * sipQNetworkDiskCache::data(const QUrl& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_data);

    if (!meth)
        return QNetworkDiskCache::data(a0);

    extern QIODevice * sipVH_QtNetwork_9(sip_gilstate_t,PyObject *,bool*,const QUrl&);

    return sipVH_QtNetwork_9(sipGILState,meth,0,a0);
}

bool sipQNetworkDiskCache::remove(const QUrl& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_remove);

    if (!meth)
        return QNetworkDiskCache::remove(a0);

    extern bool sipVH_QtNetwork_8(sip_gilstate_t,PyObject *,bool*,const QUrl&);

    return sipVH_QtNetwork_8(sipGILState,meth,0,a0);
}

QIODevice * sipQNetworkDiskCache::prepare(const QNetworkCacheMetaData& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_prepare);

    if (!meth)
        return QNetworkDiskCache::prepare(a0);

    extern QIODevice * sipVH_QtNetwork_7(sip_gilstate_t,PyObject *,bool*,const QNetworkCacheMetaData&);

    return sipVH_QtNetwork_7(sipGILState,meth,0,a0);
}

void sipQNetworkDiskCache::insert(QIODevice *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_insert);

    if (!meth)
    {
        QNetworkDiskCache::insert(a0);
        return;
    }

    extern void sipVH_QtNetwork_6(sip_gilstate_t,PyObject *,bool*,QIODevice *);

    sipVH_QtNetwork_6(sipGILState,meth,0,a0);
}

void sipQNetworkDiskCache::clear()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_clear);

    if (!meth)
    {
        QNetworkDiskCache::clear();
        return;
    }

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

qint64 sipQNetworkDiskCache::expire()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_expire);

    if (!meth)
        return QNetworkDiskCache::expire();

    typedef PY_LONG_LONG (*sipVH_QtCore_15)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_15)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[15]))(sipGILState,meth,0);
}

bool sipQNetworkDiskCache::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[12]))(sipGILState,meth,0,a0);
}

bool sipQNetworkDiskCache::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[20]))(sipGILState,meth,0,a0,a1);
}

void sipQNetworkDiskCache::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[3]))(sipGILState,meth,0,a0);
}

void sipQNetworkDiskCache::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[19]))(sipGILState,meth,0,a0);
}

void sipQNetworkDiskCache::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[18]))(sipGILState,meth,0,a0);
}

void sipQNetworkDiskCache::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

void sipQNetworkDiskCache::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

int sipQNetworkDiskCache::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQNetworkDiskCache::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQNetworkDiskCache::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQNetworkDiskCache::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQNetworkDiskCache::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQNetworkDiskCache::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

qint64 sipQNetworkDiskCache::sipProtectVirt_expire(bool sipSelfWasArg)
{
    return (sipSelfWasArg ? QNetworkDiskCache::expire() : expire());
}


extern "C" {static PyObject *meth_QNetworkDiskCache_receivers(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,&a0))
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
#line 500 "sipQtNetworkQNetworkDiskCache.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_cacheDirectory(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_cacheDirectory(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QNetworkDiskCache,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->cacheDirectory());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_cacheDirectory);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_setCacheDirectory(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_setCacheDirectory(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCacheDirectory(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_setCacheDirectory);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_maximumCacheSize(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_maximumCacheSize(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QNetworkDiskCache,&sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maximumCacheSize();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_maximumCacheSize);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_setMaximumCacheSize(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_setMaximumCacheSize(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        qint64 a0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bn",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMaximumCacheSize(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_setMaximumCacheSize);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_cacheSize(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_cacheSize(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QNetworkDiskCache,&sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QNetworkDiskCache::cacheSize() : sipCpp->cacheSize());
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_cacheSize);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_metaData(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_metaData(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QUrl * a0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QUrl,&a0))
        {
            QNetworkCacheMetaData *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkCacheMetaData((sipSelfWasArg ? sipCpp->QNetworkDiskCache::metaData(*a0) : sipCpp->metaData(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkCacheMetaData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_metaData);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_updateMetaData(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_updateMetaData(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QNetworkCacheMetaData * a0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QNetworkCacheMetaData,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QNetworkDiskCache::updateMetaData(*a0) : sipCpp->updateMetaData(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_updateMetaData);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_data(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_data(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QUrl * a0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QUrl,&a0))
        {
            QIODevice *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QNetworkDiskCache::data(*a0) : sipCpp->data(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_data);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_remove(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QUrl * a0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QUrl,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QNetworkDiskCache::remove(*a0) : sipCpp->remove(*a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_remove);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_prepare(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_prepare(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QNetworkCacheMetaData * a0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QNetworkCacheMetaData,&a0))
        {
            QIODevice *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QNetworkDiskCache::prepare(*a0) : sipCpp->prepare(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_prepare);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_insert(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QIODevice * a0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QIODevice,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QNetworkDiskCache::insert(a0) : sipCpp->insert(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_insert);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_fileMetaData(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_fileMetaData(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QNetworkDiskCache,&sipCpp,sipType_QString,&a0,&a0State))
        {
            QNetworkCacheMetaData *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkCacheMetaData(sipCpp->fileMetaData(*a0));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkCacheMetaData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_fileMetaData);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_clear(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QNetworkDiskCache,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QNetworkDiskCache::clear() : sipCpp->clear());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_clear);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkDiskCache_expire(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDiskCache_expire(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        sipQNetworkDiskCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"p",&sipSelf,sipType_QNetworkDiskCache,&sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_expire(sipSelfWasArg);
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkDiskCache,sipName_expire);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkDiskCache(void *, const sipTypeDef *);}
static void *cast_QNetworkDiskCache(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QNetworkDiskCache)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QAbstractNetworkCache)->ctd_cast((QAbstractNetworkCache *)(QNetworkDiskCache *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkDiskCache(void *, int);}
static void release_QNetworkDiskCache(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQNetworkDiskCache *>(sipCppV);
    else
        delete reinterpret_cast<QNetworkDiskCache *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QNetworkDiskCache(sipSimpleWrapper *);}
static void dealloc_QNetworkDiskCache(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQNetworkDiskCache *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkDiskCache(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QNetworkDiskCache(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QNetworkDiskCache(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQNetworkDiskCache *sipCpp = 0;

    if (!sipCpp)
    {
        QObject * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|JH",sipType_QObject,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQNetworkDiskCache(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNetworkDiskCache[] = {{0, 255, 1}};


static PyMethodDef methods_QNetworkDiskCache[] = {
    {SIP_MLNAME_CAST(sipName_cacheDirectory), meth_QNetworkDiskCache_cacheDirectory, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_cacheSize), meth_QNetworkDiskCache_cacheSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QNetworkDiskCache_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QNetworkDiskCache_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QNetworkDiskCache_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QNetworkDiskCache_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_data), meth_QNetworkDiskCache_data, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QNetworkDiskCache_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_expire), meth_QNetworkDiskCache_expire, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fileMetaData), meth_QNetworkDiskCache_fileMetaData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insert), meth_QNetworkDiskCache_insert, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_maximumCacheSize), meth_QNetworkDiskCache_maximumCacheSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metaData), meth_QNetworkDiskCache_metaData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_prepare), meth_QNetworkDiskCache_prepare, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QNetworkDiskCache_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_remove), meth_QNetworkDiskCache_remove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCacheDirectory), meth_QNetworkDiskCache_setCacheDirectory, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMaximumCacheSize), meth_QNetworkDiskCache_setMaximumCacheSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QNetworkDiskCache_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_updateMetaData), meth_QNetworkDiskCache_updateMetaData, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkDiskCache = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QNetworkDiskCache,
        {0}
    },
    {
        sipNameNr_QNetworkDiskCache,
        {0, 0, 1},
        20, methods_QNetworkDiskCache,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QNetworkDiskCache,
    0,
    init_QNetworkDiskCache,
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
    dealloc_QNetworkDiskCache,
    0,
    0,
    0,
    release_QNetworkDiskCache,
    cast_QNetworkDiskCache,
    0,
    0,
    0
},
    &QNetworkDiskCache::staticMetaObject,
    0,
    0
};

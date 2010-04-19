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

#line 194 "sip/QtNetwork/qabstractnetworkcache.sip"
#include <qabstractnetworkcache.h>
#line 39 "sipQtNetworkQAbstractNetworkCache.cpp"

#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 41 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 46 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 154 "sip/QtNetwork/qabstractnetworkcache.sip"
#include <qabstractnetworkcache.h>
#line 49 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 41 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 52 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 64 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 70 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 73 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 76 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 79 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 82 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 85 "sipQtNetworkQAbstractNetworkCache.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 88 "sipQtNetworkQAbstractNetworkCache.cpp"


class sipQAbstractNetworkCache : public QAbstractNetworkCache
{
public:
    sipQAbstractNetworkCache(QObject *);
    virtual ~sipQAbstractNetworkCache();

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
    QNetworkCacheMetaData metaData(const QUrl&);
    void updateMetaData(const QNetworkCacheMetaData&);
    QIODevice * data(const QUrl&);
    bool remove(const QUrl&);
    qint64 cacheSize() const;
    QIODevice * prepare(const QNetworkCacheMetaData&);
    void insert(QIODevice *);
    void clear();
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
    sipQAbstractNetworkCache(const sipQAbstractNetworkCache &);
    sipQAbstractNetworkCache &operator = (const sipQAbstractNetworkCache &);

    char sipPyMethods[15];
};

sipQAbstractNetworkCache::sipQAbstractNetworkCache(QObject *a0): QAbstractNetworkCache(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractNetworkCache::~sipQAbstractNetworkCache()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQAbstractNetworkCache::metaObject() const
{
    return sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QAbstractNetworkCache);
}

int sipQAbstractNetworkCache::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QAbstractNetworkCache::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QAbstractNetworkCache,_c,_id,_a);

    return _id;
}

void *sipQAbstractNetworkCache::qt_metacast(const char *_clname)
{
    return (sip_QtNetwork_qt_metacast && sip_QtNetwork_qt_metacast(sipPySelf,sipType_QAbstractNetworkCache,_clname)) ? this : QAbstractNetworkCache::qt_metacast(_clname);
}

QNetworkCacheMetaData sipQAbstractNetworkCache::metaData(const QUrl& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QAbstractNetworkCache,sipName_metaData);

    if (!meth)
        return QNetworkCacheMetaData();

    extern QNetworkCacheMetaData sipVH_QtNetwork_11(sip_gilstate_t,PyObject *,bool*,const QUrl&);

    return sipVH_QtNetwork_11(sipGILState,meth,0,a0);
}

void sipQAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QAbstractNetworkCache,sipName_updateMetaData);

    if (!meth)
        return;

    extern void sipVH_QtNetwork_10(sip_gilstate_t,PyObject *,bool*,const QNetworkCacheMetaData&);

    sipVH_QtNetwork_10(sipGILState,meth,0,a0);
}

QIODevice * sipQAbstractNetworkCache::data(const QUrl& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QAbstractNetworkCache,sipName_data);

    if (!meth)
        return 0;

    extern QIODevice * sipVH_QtNetwork_9(sip_gilstate_t,PyObject *,bool*,const QUrl&);

    return sipVH_QtNetwork_9(sipGILState,meth,0,a0);
}

bool sipQAbstractNetworkCache::remove(const QUrl& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QAbstractNetworkCache,sipName_remove);

    if (!meth)
        return 0;

    extern bool sipVH_QtNetwork_8(sip_gilstate_t,PyObject *,bool*,const QUrl&);

    return sipVH_QtNetwork_8(sipGILState,meth,0,a0);
}

qint64 sipQAbstractNetworkCache::cacheSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QAbstractNetworkCache,sipName_cacheSize);

    if (!meth)
        return 0;

    typedef PY_LONG_LONG (*sipVH_QtCore_15)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_15)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[15]))(sipGILState,meth,0);
}

QIODevice * sipQAbstractNetworkCache::prepare(const QNetworkCacheMetaData& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QAbstractNetworkCache,sipName_prepare);

    if (!meth)
        return 0;

    extern QIODevice * sipVH_QtNetwork_7(sip_gilstate_t,PyObject *,bool*,const QNetworkCacheMetaData&);

    return sipVH_QtNetwork_7(sipGILState,meth,0,a0);
}

void sipQAbstractNetworkCache::insert(QIODevice *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,sipName_QAbstractNetworkCache,sipName_insert);

    if (!meth)
        return;

    extern void sipVH_QtNetwork_6(sip_gilstate_t,PyObject *,bool*,QIODevice *);

    sipVH_QtNetwork_6(sipGILState,meth,0,a0);
}

void sipQAbstractNetworkCache::clear()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QAbstractNetworkCache,sipName_clear);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

bool sipQAbstractNetworkCache::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[12]))(sipGILState,meth,0,a0);
}

bool sipQAbstractNetworkCache::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[20]))(sipGILState,meth,0,a0,a1);
}

void sipQAbstractNetworkCache::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[3]))(sipGILState,meth,0,a0);
}

void sipQAbstractNetworkCache::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[19]))(sipGILState,meth,0,a0);
}

void sipQAbstractNetworkCache::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[18]))(sipGILState,meth,0,a0);
}

void sipQAbstractNetworkCache::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

void sipQAbstractNetworkCache::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

int sipQAbstractNetworkCache::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQAbstractNetworkCache::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQAbstractNetworkCache::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQAbstractNetworkCache::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQAbstractNetworkCache::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQAbstractNetworkCache::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_receivers(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,&a0))
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
#line 469 "sipQtNetworkQAbstractNetworkCache.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_metaData(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_metaData(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QUrl * a0;
        QAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QUrl,&a0))
        {
            QNetworkCacheMetaData *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNetworkCache, sipName_metaData);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkCacheMetaData(sipCpp->metaData(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkCacheMetaData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_metaData);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_updateMetaData(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_updateMetaData(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QNetworkCacheMetaData * a0;
        QAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QNetworkCacheMetaData,&a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNetworkCache, sipName_updateMetaData);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->updateMetaData(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_updateMetaData);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_data(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_data(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QUrl * a0;
        QAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QUrl,&a0))
        {
            QIODevice *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNetworkCache, sipName_data);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->data(*a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_data);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_remove(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QUrl * a0;
        QAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QUrl,&a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNetworkCache, sipName_remove);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->remove(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_remove);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_cacheSize(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_cacheSize(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp))
        {
            qint64 sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNetworkCache, sipName_cacheSize);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->cacheSize();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_cacheSize);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_prepare(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_prepare(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QNetworkCacheMetaData * a0;
        QAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QNetworkCacheMetaData,&a0))
        {
            QIODevice *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNetworkCache, sipName_prepare);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->prepare(*a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_prepare);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_insert(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QIODevice * a0;
        QAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp,sipType_QIODevice,&a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNetworkCache, sipName_insert);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->insert(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_insert);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractNetworkCache_clear(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNetworkCache_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractNetworkCache *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QAbstractNetworkCache,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNetworkCache, sipName_clear);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractNetworkCache,sipName_clear);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractNetworkCache(void *, const sipTypeDef *);}
static void *cast_QAbstractNetworkCache(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAbstractNetworkCache)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QAbstractNetworkCache *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractNetworkCache(void *, int);}
static void release_QAbstractNetworkCache(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractNetworkCache *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractNetworkCache *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractNetworkCache(sipSimpleWrapper *);}
static void dealloc_QAbstractNetworkCache(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractNetworkCache *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractNetworkCache(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QAbstractNetworkCache(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QAbstractNetworkCache(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQAbstractNetworkCache *sipCpp = 0;

    if (!sipCpp)
    {
        QObject * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|JH",sipType_QObject,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractNetworkCache(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAbstractNetworkCache[] = {{111, 0, 1}};


static PyMethodDef methods_QAbstractNetworkCache[] = {
    {SIP_MLNAME_CAST(sipName_cacheSize), meth_QAbstractNetworkCache_cacheSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QAbstractNetworkCache_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QAbstractNetworkCache_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QAbstractNetworkCache_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QAbstractNetworkCache_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_data), meth_QAbstractNetworkCache_data, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QAbstractNetworkCache_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insert), meth_QAbstractNetworkCache_insert, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metaData), meth_QAbstractNetworkCache_metaData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_prepare), meth_QAbstractNetworkCache_prepare, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QAbstractNetworkCache_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_remove), meth_QAbstractNetworkCache_remove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QAbstractNetworkCache_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_updateMetaData), meth_QAbstractNetworkCache_updateMetaData, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QAbstractNetworkCache = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QAbstractNetworkCache,
        {0}
    },
    {
        sipNameNr_QAbstractNetworkCache,
        {0, 0, 1},
        14, methods_QAbstractNetworkCache,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QAbstractNetworkCache,
    0,
    init_QAbstractNetworkCache,
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
    dealloc_QAbstractNetworkCache,
    0,
    0,
    0,
    release_QAbstractNetworkCache,
    cast_QAbstractNetworkCache,
    0,
    0,
    0
},
    &QAbstractNetworkCache::staticMetaObject,
    0,
    0
};

/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:29 2010
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

#include "sipAPIQtScript.h"

#line 39 "sip/QtScript/qscriptclasspropertyiterator.sip"
#include <qscriptclasspropertyiterator.h>
#line 39 "sipQtScriptQScriptClassPropertyIterator.cpp"

#line 51 "sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 43 "sipQtScriptQScriptClassPropertyIterator.cpp"
#line 51 "sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 46 "sipQtScriptQScriptClassPropertyIterator.cpp"
#line 39 "sip/QtScript/qscriptstring.sip"
#include <qscriptstring.h>
#line 49 "sipQtScriptQScriptClassPropertyIterator.cpp"


class sipQScriptClassPropertyIterator : public QScriptClassPropertyIterator
{
public:
    sipQScriptClassPropertyIterator(const QScriptValue&);
    virtual ~sipQScriptClassPropertyIterator();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool hasNext() const;
    void next();
    bool hasPrevious() const;
    void previous();
    void toFront();
    void toBack();
    QScriptString name() const;
    uint id() const;
    QScriptValue::PropertyFlags flags() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQScriptClassPropertyIterator(const sipQScriptClassPropertyIterator &);
    sipQScriptClassPropertyIterator &operator = (const sipQScriptClassPropertyIterator &);

    char sipPyMethods[9];
};

sipQScriptClassPropertyIterator::sipQScriptClassPropertyIterator(const QScriptValue& a0): QScriptClassPropertyIterator(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQScriptClassPropertyIterator::~sipQScriptClassPropertyIterator()
{
    sipCommonDtor(sipPySelf);
}

bool sipQScriptClassPropertyIterator::hasNext() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QScriptClassPropertyIterator,sipName_hasNext);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtScript_QtCore->em_virthandlers[1]))(sipGILState,meth,0);
}

void sipQScriptClassPropertyIterator::next()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QScriptClassPropertyIterator,sipName_next);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtScript_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

bool sipQScriptClassPropertyIterator::hasPrevious() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QScriptClassPropertyIterator,sipName_hasPrevious);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtScript_QtCore->em_virthandlers[1]))(sipGILState,meth,0);
}

void sipQScriptClassPropertyIterator::previous()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QScriptClassPropertyIterator,sipName_previous);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtScript_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

void sipQScriptClassPropertyIterator::toFront()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QScriptClassPropertyIterator,sipName_toFront);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtScript_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

void sipQScriptClassPropertyIterator::toBack()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QScriptClassPropertyIterator,sipName_toBack);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtScript_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

QScriptString sipQScriptClassPropertyIterator::name() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QScriptClassPropertyIterator,sipName_name);

    if (!meth)
        return QScriptString();

    extern QScriptString sipVH_QtScript_9(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtScript_9(sipGILState,meth,0);
}

uint sipQScriptClassPropertyIterator::id() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_id);

    if (!meth)
        return QScriptClassPropertyIterator::id();

    extern unsigned sipVH_QtScript_8(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtScript_8(sipGILState,meth,0);
}

QScriptValue::PropertyFlags sipQScriptClassPropertyIterator::flags() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_flags);

    if (!meth)
        return QScriptClassPropertyIterator::flags();

    extern QScriptValue::PropertyFlags sipVH_QtScript_7(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtScript_7(sipGILState,meth,0);
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_object(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_object(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            QScriptValue *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue(sipCpp->object());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_object);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_hasNext(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_hasNext);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasNext();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_hasNext);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_next(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_next(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_next);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->next();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_next);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_hasPrevious(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_hasPrevious(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_hasPrevious);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasPrevious();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_hasPrevious);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_previous(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_previous(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_previous);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->previous();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_previous);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_toFront(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_toFront(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_toFront);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->toFront();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_toFront);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_toBack(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_toBack(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_toBack);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->toBack();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_toBack);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_name(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_name(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            QScriptString *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_name);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_name);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_id(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_id(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            uint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QScriptClassPropertyIterator::id() : sipCpp->id());
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_id);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptClassPropertyIterator_flags(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QScriptClassPropertyIterator,&sipCpp))
        {
            QScriptValue::PropertyFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::PropertyFlags((sipSelfWasArg ? sipCpp->QScriptClassPropertyIterator::flags() : sipCpp->flags()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QScriptClassPropertyIterator,sipName_flags);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QScriptClassPropertyIterator(void *, const sipTypeDef *);}
static void *cast_QScriptClassPropertyIterator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QScriptClassPropertyIterator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptClassPropertyIterator(void *, int);}
static void release_QScriptClassPropertyIterator(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQScriptClassPropertyIterator *>(sipCppV);
    else
        delete reinterpret_cast<QScriptClassPropertyIterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QScriptClassPropertyIterator(sipSimpleWrapper *);}
static void dealloc_QScriptClassPropertyIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQScriptClassPropertyIterator *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptClassPropertyIterator(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QScriptClassPropertyIterator(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QScriptClassPropertyIterator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQScriptClassPropertyIterator *sipCpp = 0;

    if (!sipCpp)
    {
        const QScriptValue * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QScriptValue,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQScriptClassPropertyIterator(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


static PyMethodDef methods_QScriptClassPropertyIterator[] = {
    {SIP_MLNAME_CAST(sipName_flags), meth_QScriptClassPropertyIterator_flags, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasNext), meth_QScriptClassPropertyIterator_hasNext, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasPrevious), meth_QScriptClassPropertyIterator_hasPrevious, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_id), meth_QScriptClassPropertyIterator_id, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QScriptClassPropertyIterator_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_next), meth_QScriptClassPropertyIterator_next, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_object), meth_QScriptClassPropertyIterator_object, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_previous), meth_QScriptClassPropertyIterator_previous, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toBack), meth_QScriptClassPropertyIterator_toBack, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toFront), meth_QScriptClassPropertyIterator_toFront, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptClassPropertyIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QScriptClassPropertyIterator,
        {0}
    },
    {
        sipNameNr_QScriptClassPropertyIterator,
        {0, 0, 1},
        10, methods_QScriptClassPropertyIterator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QScriptClassPropertyIterator,
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
    dealloc_QScriptClassPropertyIterator,
    0,
    0,
    0,
    release_QScriptClassPropertyIterator,
    cast_QScriptClassPropertyIterator,
    0,
    0,
    0
},
    0,
    0,
    0
};

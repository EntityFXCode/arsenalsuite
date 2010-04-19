/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:24 2010
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

#line 45 "sip/QtGui/qgraphicsview.sip"
#include <qgraphicsview.h>
#line 39 "sipQtGuiQGraphicsViewCacheMode.cpp"

#line 45 "sip/QtGui/qgraphicsview.sip"
#include <qgraphicsview.h>
#line 43 "sipQtGuiQGraphicsViewCacheMode.cpp"


extern "C" {static int slot_QGraphicsView_CacheMode___bool__(PyObject *sipSelf);}
static int slot_QGraphicsView_CacheMode___bool__(PyObject *sipSelf)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQGraphicsViewCacheMode.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGraphicsView_CacheMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QGraphicsView::CacheMode * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QGraphicsView_CacheMode,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQGraphicsViewCacheMode.cpp"

            sipReleaseType(const_cast<QGraphicsView::CacheMode *>(a0),sipType_QGraphicsView_CacheMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QGraphicsView_CacheMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGraphicsView_CacheMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QGraphicsView::CacheMode * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QGraphicsView_CacheMode,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 121 "sipQtGuiQGraphicsViewCacheMode.cpp"

            sipReleaseType(const_cast<QGraphicsView::CacheMode *>(a0),sipType_QGraphicsView_CacheMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QGraphicsView_CacheMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___invert__(PyObject *sipSelf);}
static PyObject *slot_QGraphicsView_CacheMode___invert__(PyObject *sipSelf)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsView::CacheMode *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsView::CacheMode(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QGraphicsView_CacheMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QGraphicsView::CacheMode * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_QGraphicsView_CacheMode,&a0,&a0State,&a1))
        {
            QGraphicsView::CacheMode *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsView::CacheMode((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QGraphicsView_CacheMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QGraphicsView::CacheMode * a0;
        int a0State = 0;
        QGraphicsView::CacheMode * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QGraphicsView_CacheMode,&a0,&a0State,sipType_QGraphicsView_CacheMode,&a1,&a1State))
        {
            QGraphicsView::CacheMode *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsView::CacheMode((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);
            sipReleaseType(a1,sipType_QGraphicsView_CacheMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QGraphicsView_CacheMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QGraphicsView::CacheMode * a0;
        int a0State = 0;
        QGraphicsView::CacheMode * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QGraphicsView_CacheMode,&a0,&a0State,sipType_QGraphicsView_CacheMode,&a1,&a1State))
        {
            QGraphicsView::CacheMode *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsView::CacheMode((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);
            sipReleaseType(a1,sipType_QGraphicsView_CacheMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___int__(PyObject *sipSelf);}
static PyObject *slot_QGraphicsView_CacheMode___int__(PyObject *sipSelf)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGraphicsView_CacheMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QGraphicsView::CacheMode * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QGraphicsView_CacheMode,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsView::CacheMode::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGraphicsView_CacheMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QGraphicsView::CacheMode * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QGraphicsView_CacheMode,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsView::CacheMode::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGraphicsView_CacheMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsView::CacheMode::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsView_CacheMode(void *, const sipTypeDef *);}
static void *cast_QGraphicsView_CacheMode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGraphicsView_CacheMode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsView_CacheMode(void *, int);}
static void release_QGraphicsView_CacheMode(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsView::CacheMode *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGraphicsView_CacheMode(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsView_CacheMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsView::CacheMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsView::CacheMode *>(sipSrc);
}


extern "C" {static void *array_QGraphicsView_CacheMode(SIP_SSIZE_T);}
static void *array_QGraphicsView_CacheMode(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsView::CacheMode[sipNrElem];
}


extern "C" {static void *copy_QGraphicsView_CacheMode(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsView_CacheMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsView::CacheMode(reinterpret_cast<const QGraphicsView::CacheMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsView_CacheMode(sipSimpleWrapper *);}
static void dealloc_QGraphicsView_CacheMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsView_CacheMode(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QGraphicsView_CacheMode(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QGraphicsView_CacheMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QGraphicsView::CacheMode *sipCpp = 0;

    if (!sipCpp)
    {
        const QGraphicsView::CacheMode * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QGraphicsView_CacheMode,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsView::CacheMode(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QGraphicsView::CacheMode *>(a0),sipType_QGraphicsView_CacheMode,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsView::CacheMode(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsView::CacheMode();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QGraphicsView_CacheMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsView_CacheMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsView::CacheMode **sipCppPtr = reinterpret_cast<QGraphicsView::CacheMode **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsView::CacheMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheModeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsView_CacheMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheModeFlag)))
{
    *sipCppPtr = new QGraphicsView::CacheMode(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsView::CacheMode *>(sipConvertToType(sipPy, sipType_QGraphicsView_CacheMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 506 "sipQtGuiQGraphicsViewCacheMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsView_CacheMode[] = {
    {(void *)slot_QGraphicsView_CacheMode___bool__, bool_slot},
    {(void *)slot_QGraphicsView_CacheMode___ne__, ne_slot},
    {(void *)slot_QGraphicsView_CacheMode___eq__, eq_slot},
    {(void *)slot_QGraphicsView_CacheMode___invert__, invert_slot},
    {(void *)slot_QGraphicsView_CacheMode___and__, and_slot},
    {(void *)slot_QGraphicsView_CacheMode___xor__, xor_slot},
    {(void *)slot_QGraphicsView_CacheMode___or__, or_slot},
    {(void *)slot_QGraphicsView_CacheMode___int__, int_slot},
    {(void *)slot_QGraphicsView_CacheMode___ixor__, ixor_slot},
    {(void *)slot_QGraphicsView_CacheMode___ior__, ior_slot},
    {(void *)slot_QGraphicsView_CacheMode___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsView_CacheMode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGraphicsView__CacheMode,
        {0}
    },
    {
        sipNameNr_CacheMode,
        {182, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsView_CacheMode,
    init_QGraphicsView_CacheMode,
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
    dealloc_QGraphicsView_CacheMode,
    assign_QGraphicsView_CacheMode,
    array_QGraphicsView_CacheMode,
    copy_QGraphicsView_CacheMode,
    release_QGraphicsView_CacheMode,
    cast_QGraphicsView_CacheMode,
    convertTo_QGraphicsView_CacheMode,
    0,
    0
},
    0,
    1,
    0
};

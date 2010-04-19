/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:22 2010
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

#line 41 "sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 51 "sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 41 "sipQtGuiQTextEditAutoFormatting.cpp"

#line 41 "sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 51 "sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 47 "sipQtGuiQTextEditAutoFormatting.cpp"


extern "C" {static int slot_QTextEdit_AutoFormatting___bool__(PyObject *sipSelf);}
static int slot_QTextEdit_AutoFormatting___bool__(PyObject *sipSelf)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 65 "sipQtGuiQTextEditAutoFormatting.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTextEdit_AutoFormatting___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QTextEdit::AutoFormatting * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QTextEdit_AutoFormatting,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 93 "sipQtGuiQTextEditAutoFormatting.cpp"

            sipReleaseType(const_cast<QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextEdit_AutoFormatting,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTextEdit_AutoFormatting___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QTextEdit::AutoFormatting * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QTextEdit_AutoFormatting,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQTextEditAutoFormatting.cpp"

            sipReleaseType(const_cast<QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextEdit_AutoFormatting,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___invert__(PyObject *sipSelf);}
static PyObject *slot_QTextEdit_AutoFormatting___invert__(PyObject *sipSelf)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;


    {
        {
            QTextEdit::AutoFormatting *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextEdit::AutoFormatting(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QTextEdit_AutoFormatting___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QTextEdit::AutoFormatting * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_QTextEdit_AutoFormatting,&a0,&a0State,&a1))
        {
            QTextEdit::AutoFormatting *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextEdit::AutoFormatting((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QTextEdit_AutoFormatting___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QTextEdit::AutoFormatting * a0;
        int a0State = 0;
        QTextEdit::AutoFormatting * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QTextEdit_AutoFormatting,&a0,&a0State,sipType_QTextEdit_AutoFormatting,&a1,&a1State))
        {
            QTextEdit::AutoFormatting *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextEdit::AutoFormatting((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);
            sipReleaseType(a1,sipType_QTextEdit_AutoFormatting,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QTextEdit_AutoFormatting___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QTextEdit::AutoFormatting * a0;
        int a0State = 0;
        QTextEdit::AutoFormatting * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QTextEdit_AutoFormatting,&a0,&a0State,sipType_QTextEdit_AutoFormatting,&a1,&a1State))
        {
            QTextEdit::AutoFormatting *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextEdit::AutoFormatting((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);
            sipReleaseType(a1,sipType_QTextEdit_AutoFormatting,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___int__(PyObject *sipSelf);}
static PyObject *slot_QTextEdit_AutoFormatting___int__(PyObject *sipSelf)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

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


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTextEdit_AutoFormatting___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QTextEdit::AutoFormatting * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QTextEdit_AutoFormatting,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextEdit::AutoFormatting::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTextEdit_AutoFormatting___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QTextEdit::AutoFormatting * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QTextEdit_AutoFormatting,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextEdit::AutoFormatting::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTextEdit_AutoFormatting___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextEdit::AutoFormatting::operator&=(a0);
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
extern "C" {static void *cast_QTextEdit_AutoFormatting(void *, const sipTypeDef *);}
static void *cast_QTextEdit_AutoFormatting(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextEdit_AutoFormatting)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextEdit_AutoFormatting(void *, int);}
static void release_QTextEdit_AutoFormatting(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextEdit::AutoFormatting *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextEdit_AutoFormatting(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextEdit_AutoFormatting(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextEdit::AutoFormatting *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextEdit::AutoFormatting *>(sipSrc);
}


extern "C" {static void *array_QTextEdit_AutoFormatting(SIP_SSIZE_T);}
static void *array_QTextEdit_AutoFormatting(SIP_SSIZE_T sipNrElem)
{
    return new QTextEdit::AutoFormatting[sipNrElem];
}


extern "C" {static void *copy_QTextEdit_AutoFormatting(const void *, SIP_SSIZE_T);}
static void *copy_QTextEdit_AutoFormatting(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextEdit::AutoFormatting(reinterpret_cast<const QTextEdit::AutoFormatting *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextEdit_AutoFormatting(sipSimpleWrapper *);}
static void dealloc_QTextEdit_AutoFormatting(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextEdit_AutoFormatting(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QTextEdit_AutoFormatting(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QTextEdit_AutoFormatting(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QTextEdit::AutoFormatting *sipCpp = 0;

    if (!sipCpp)
    {
        const QTextEdit::AutoFormatting * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QTextEdit_AutoFormatting,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEdit::AutoFormatting(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEdit::AutoFormatting(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEdit::AutoFormatting();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QTextEdit_AutoFormatting(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextEdit_AutoFormatting(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextEdit::AutoFormatting **sipCppPtr = reinterpret_cast<QTextEdit::AutoFormatting **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextEdit::AutoFormatting is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormattingFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextEdit_AutoFormatting, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormattingFlag)))
{
    *sipCppPtr = new QTextEdit::AutoFormatting(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextEdit::AutoFormatting *>(sipConvertToType(sipPy, sipType_QTextEdit_AutoFormatting, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 510 "sipQtGuiQTextEditAutoFormatting.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextEdit_AutoFormatting[] = {
    {(void *)slot_QTextEdit_AutoFormatting___bool__, bool_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ne__, ne_slot},
    {(void *)slot_QTextEdit_AutoFormatting___eq__, eq_slot},
    {(void *)slot_QTextEdit_AutoFormatting___invert__, invert_slot},
    {(void *)slot_QTextEdit_AutoFormatting___and__, and_slot},
    {(void *)slot_QTextEdit_AutoFormatting___xor__, xor_slot},
    {(void *)slot_QTextEdit_AutoFormatting___or__, or_slot},
    {(void *)slot_QTextEdit_AutoFormatting___int__, int_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ixor__, ixor_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ior__, ior_slot},
    {(void *)slot_QTextEdit_AutoFormatting___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextEdit_AutoFormatting = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextEdit__AutoFormatting,
        {0}
    },
    {
        sipNameNr_AutoFormatting,
        {601, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextEdit_AutoFormatting,
    init_QTextEdit_AutoFormatting,
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
    dealloc_QTextEdit_AutoFormatting,
    assign_QTextEdit_AutoFormatting,
    array_QTextEdit_AutoFormatting,
    copy_QTextEdit_AutoFormatting,
    release_QTextEdit_AutoFormatting,
    cast_QTextEdit_AutoFormatting,
    convertTo_QTextEdit_AutoFormatting,
    0,
    0
},
    0,
    1,
    0
};

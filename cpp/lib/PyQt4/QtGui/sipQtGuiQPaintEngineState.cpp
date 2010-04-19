/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:23 2010
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

#line 209 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 39 "sipQtGuiQPaintEngineState.cpp"

#line 45 "sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 43 "sipQtGuiQPaintEngineState.cpp"
#line 41 "sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 46 "sipQtGuiQPaintEngineState.cpp"
#line 41 "sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 49 "sipQtGuiQPaintEngineState.cpp"
#line 41 "sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 57 "sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 54 "sipQtGuiQPaintEngineState.cpp"
#line 41 "sip/QtGui/qregion.sip"
#include <qregion.h>
#line 57 "sipQtGuiQPaintEngineState.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "sipQtGuiQPaintEngineState.cpp"
#line 41 "sip/QtGui/qmatrix.sip"
#include <qmatrix.h>
#line 63 "sipQtGuiQPaintEngineState.cpp"
#line 41 "sip/QtGui/qfont.sip"
#include <qfont.h>
#line 66 "sipQtGuiQPaintEngineState.cpp"
#line 41 "sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 69 "sipQtGuiQPaintEngineState.cpp"
#line 94 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 72 "sipQtGuiQPaintEngineState.cpp"
#line 41 "sip/QtGui/qpen.sip"
#include <qpen.h>
#line 75 "sipQtGuiQPaintEngineState.cpp"
#line 69 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 78 "sipQtGuiQPaintEngineState.cpp"


extern "C" {static PyObject *meth_QPaintEngineState_state(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_state(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QPaintEngine::DirtyFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPaintEngine::DirtyFlags(sipCpp->state());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_DirtyFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_state);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_pen(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_pen(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QPen *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPen(sipCpp->pen());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPen,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_pen);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_brush(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brush(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QBrush *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBrush(sipCpp->brush());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_brush);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_brushOrigin(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brushOrigin(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->brushOrigin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_brushOrigin);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_backgroundBrush(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_backgroundBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QBrush *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBrush(sipCpp->backgroundBrush());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_backgroundBrush);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_backgroundMode(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_backgroundMode(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            Qt::BGMode sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->backgroundMode();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_BGMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_backgroundMode);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_font(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_font(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QFont *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFont(sipCpp->font());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_font);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_matrix(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_matrix(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QMatrix *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix(sipCpp->matrix());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_matrix);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_opacity(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_opacity(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->opacity();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_opacity);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_clipOperation(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipOperation(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            Qt::ClipOperation sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->clipOperation();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_ClipOperation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_clipOperation);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_clipRegion(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipRegion(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QRegion *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRegion(sipCpp->clipRegion());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_clipRegion);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_clipPath(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipPath(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QPainterPath *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainterPath(sipCpp->clipPath());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPainterPath,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_clipPath);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_isClipEnabled(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_isClipEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isClipEnabled();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_isClipEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_renderHints(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_renderHints(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QPainter::RenderHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainter::RenderHints(sipCpp->renderHints());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_renderHints);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_compositionMode(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_compositionMode(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QPainter::CompositionMode sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->compositionMode();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QPainter_CompositionMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_compositionMode);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_painter(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_painter(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QPainter *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->painter();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QPainter,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_painter);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_transform(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_transform(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            QTransform *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTransform(sipCpp->transform());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTransform,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_transform);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_brushNeedsResolving(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brushNeedsResolving(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->brushNeedsResolving();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_brushNeedsResolving);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEngineState_penNeedsResolving(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_penNeedsResolving(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEngineState,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->penNeedsResolving();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEngineState,sipName_penNeedsResolving);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPaintEngineState(void *, const sipTypeDef *);}
static void *cast_QPaintEngineState(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPaintEngineState)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPaintEngineState(void *, int);}
static void release_QPaintEngineState(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPaintEngineState *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPaintEngineState(void *, SIP_SSIZE_T, const void *);}
static void assign_QPaintEngineState(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPaintEngineState *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPaintEngineState *>(sipSrc);
}


extern "C" {static void *array_QPaintEngineState(SIP_SSIZE_T);}
static void *array_QPaintEngineState(SIP_SSIZE_T sipNrElem)
{
    return new QPaintEngineState[sipNrElem];
}


extern "C" {static void *copy_QPaintEngineState(const void *, SIP_SSIZE_T);}
static void *copy_QPaintEngineState(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPaintEngineState(reinterpret_cast<const QPaintEngineState *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPaintEngineState(sipSimpleWrapper *);}
static void dealloc_QPaintEngineState(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPaintEngineState(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QPaintEngineState(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QPaintEngineState(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QPaintEngineState *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPaintEngineState();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QPaintEngineState * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QPaintEngineState,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPaintEngineState(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


static PyMethodDef methods_QPaintEngineState[] = {
    {SIP_MLNAME_CAST(sipName_backgroundBrush), meth_QPaintEngineState_backgroundBrush, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_backgroundMode), meth_QPaintEngineState_backgroundMode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_brush), meth_QPaintEngineState_brush, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_brushNeedsResolving), meth_QPaintEngineState_brushNeedsResolving, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_brushOrigin), meth_QPaintEngineState_brushOrigin, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clipOperation), meth_QPaintEngineState_clipOperation, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clipPath), meth_QPaintEngineState_clipPath, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clipRegion), meth_QPaintEngineState_clipRegion, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_compositionMode), meth_QPaintEngineState_compositionMode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_font), meth_QPaintEngineState_font, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isClipEnabled), meth_QPaintEngineState_isClipEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_matrix), meth_QPaintEngineState_matrix, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_opacity), meth_QPaintEngineState_opacity, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_painter), meth_QPaintEngineState_painter, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pen), meth_QPaintEngineState_pen, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_penNeedsResolving), meth_QPaintEngineState_penNeedsResolving, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_renderHints), meth_QPaintEngineState_renderHints, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_state), meth_QPaintEngineState_state, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_transform), meth_QPaintEngineState_transform, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPaintEngineState = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPaintEngineState,
        {0}
    },
    {
        sipNameNr_QPaintEngineState,
        {0, 0, 1},
        19, methods_QPaintEngineState,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QPaintEngineState,
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
    dealloc_QPaintEngineState,
    assign_QPaintEngineState,
    array_QPaintEngineState,
    copy_QPaintEngineState,
    release_QPaintEngineState,
    cast_QPaintEngineState,
    0,
    0,
    0
},
    0,
    0,
    0
};

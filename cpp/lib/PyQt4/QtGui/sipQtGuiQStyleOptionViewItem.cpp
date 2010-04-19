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

#line 831 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionViewItem.cpp"

#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtGuiQStyleOptionViewItem.cpp"
#line 41 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 46 "sipQtGuiQStyleOptionViewItem.cpp"
#line 41 "sip/QtGui/qfont.sip"
#include <qfont.h>
#line 49 "sipQtGuiQStyleOptionViewItem.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "sipQtGuiQStyleOptionViewItem.cpp"
#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 55 "sipQtGuiQStyleOptionViewItem.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionViewItem(void *, const sipTypeDef *);}
static void *cast_QStyleOptionViewItem(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionViewItem)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionViewItem *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionViewItem(void *, int);}
static void release_QStyleOptionViewItem(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionViewItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionViewItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionViewItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionViewItem *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionViewItem *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionViewItem(SIP_SSIZE_T);}
static void *array_QStyleOptionViewItem(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionViewItem[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionViewItem(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionViewItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionViewItem(reinterpret_cast<const QStyleOptionViewItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionViewItem(sipSimpleWrapper *);}
static void dealloc_QStyleOptionViewItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionViewItem(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleOptionViewItem(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QStyleOptionViewItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QStyleOptionViewItem *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItem();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QStyleOptionViewItem * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QStyleOptionViewItem,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItem(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionViewItem[] = {{440, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionViewItem[] = {
    {sipName_Bottom, QStyleOptionViewItem::Bottom, 548},
    {sipName_Left, QStyleOptionViewItem::Left, 548},
    {sipName_Right, QStyleOptionViewItem::Right, 548},
    {sipName_Top, QStyleOptionViewItem::Top, 548},
    {sipName_Type, QStyleOptionViewItem::Type, 549},
    {sipName_Version, QStyleOptionViewItem::Version, 550},
};


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationAlignment(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationAlignment(void *sipSelf, PyObject *)
{
    Qt::Alignment *sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->decorationAlignment;

    return sipConvertFromType(sipVal,sipType_Qt_Alignment, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_decorationAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment *sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->decorationAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationPosition(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationPosition(void *sipSelf, PyObject *)
{
    QStyleOptionViewItem::Position sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->decorationPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionViewItem_Position);
}


extern "C" {static int varset_QStyleOptionViewItem_decorationPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItem::Position sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (QStyleOptionViewItem::Position)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->decorationPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationSize(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationSize(void *sipSelf, PyObject *)
{
    QSize *sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->decorationSize;

    return sipConvertFromType(sipVal,sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_decorationSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize *sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->decorationSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_displayAlignment(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_displayAlignment(void *sipSelf, PyObject *)
{
    Qt::Alignment *sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->displayAlignment;

    return sipConvertFromType(sipVal,sipType_Qt_Alignment, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_displayAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_displayAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment *sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->displayAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_font(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_font(void *sipSelf, PyObject *)
{
    QFont *sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->font;

    return sipConvertFromType(sipVal,sipType_QFont, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_font(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_font(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFont *sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QFont *>(sipForceConvertToType(sipPy,sipType_QFont,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->font = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_showDecorationSelected(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_showDecorationSelected(void *sipSelf, PyObject *)
{
    bool sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->showDecorationSelected;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionViewItem_showDecorationSelected(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_showDecorationSelected(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->showDecorationSelected = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_textElideMode(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_textElideMode(void *sipSelf, PyObject *)
{
    Qt::TextElideMode sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->textElideMode;

    return sipConvertFromEnum(sipVal, sipType_Qt_TextElideMode);
}


extern "C" {static int varset_QStyleOptionViewItem_textElideMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_textElideMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::TextElideMode sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (Qt::TextElideMode)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->textElideMode = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionViewItem[] = {
    {sipName_decorationAlignment, varget_QStyleOptionViewItem_decorationAlignment, varset_QStyleOptionViewItem_decorationAlignment, 0},
    {sipName_decorationPosition, varget_QStyleOptionViewItem_decorationPosition, varset_QStyleOptionViewItem_decorationPosition, 0},
    {sipName_decorationSize, varget_QStyleOptionViewItem_decorationSize, varset_QStyleOptionViewItem_decorationSize, 0},
    {sipName_displayAlignment, varget_QStyleOptionViewItem_displayAlignment, varset_QStyleOptionViewItem_displayAlignment, 0},
    {sipName_font, varget_QStyleOptionViewItem_font, varset_QStyleOptionViewItem_font, 0},
    {sipName_showDecorationSelected, varget_QStyleOptionViewItem_showDecorationSelected, varset_QStyleOptionViewItem_showDecorationSelected, 0},
    {sipName_textElideMode, varget_QStyleOptionViewItem_textElideMode, varset_QStyleOptionViewItem_textElideMode, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionViewItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionViewItem,
        {0}
    },
    {
        sipNameNr_QStyleOptionViewItem,
        {0, 0, 1},
        0, 0,
        6, enummembers_QStyleOptionViewItem,
        7, variables_QStyleOptionViewItem,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QStyleOptionViewItem,
    0,
    init_QStyleOptionViewItem,
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
    dealloc_QStyleOptionViewItem,
    assign_QStyleOptionViewItem,
    array_QStyleOptionViewItem,
    copy_QStyleOptionViewItem,
    release_QStyleOptionViewItem,
    cast_QStyleOptionViewItem,
    0,
    0,
    0
},
    0,
    0,
    0
};

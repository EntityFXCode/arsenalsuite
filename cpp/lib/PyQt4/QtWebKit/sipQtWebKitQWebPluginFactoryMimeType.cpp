/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:37 2010
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

#include "sipAPIQtWebKit.h"

#line 39 "sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 47 "sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 59 "sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 81 "sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 89 "sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 47 "sipQtWebKitQWebPluginFactoryMimeType.cpp"

#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "sipQtWebKitQWebPluginFactoryMimeType.cpp"
#line 41 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 54 "sipQtWebKitQWebPluginFactoryMimeType.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPluginFactory_MimeType(void *, const sipTypeDef *);}
static void *cast_QWebPluginFactory_MimeType(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPluginFactory_MimeType)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_MimeType(void *, int);}
static void release_QWebPluginFactory_MimeType(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPluginFactory::MimeType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPluginFactory_MimeType(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPluginFactory_MimeType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPluginFactory::MimeType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPluginFactory::MimeType *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_MimeType(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_MimeType(SIP_SSIZE_T sipNrElem)
{
    return new QWebPluginFactory::MimeType[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_MimeType(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_MimeType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPluginFactory::MimeType(reinterpret_cast<const QWebPluginFactory::MimeType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_MimeType(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_MimeType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPluginFactory_MimeType(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QWebPluginFactory_MimeType(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QWebPluginFactory_MimeType(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QWebPluginFactory::MimeType *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::MimeType();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QWebPluginFactory::MimeType * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QWebPluginFactory_MimeType,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::MimeType(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_description(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_description(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipVal = &sipCpp->description;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QWebPluginFactory_MimeType_description(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_description(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->description = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_fileExtensions(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_fileExtensions(void *sipSelf, PyObject *)
{
    QStringList *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipVal = &sipCpp->fileExtensions;

    return sipConvertFromType(sipVal,sipType_QStringList, NULL);
}


extern "C" {static int varset_QWebPluginFactory_MimeType_fileExtensions(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_fileExtensions(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStringList *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStringList *>(sipForceConvertToType(sipPy,sipType_QStringList,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->fileExtensions = *sipVal;

    sipReleaseType(sipVal, sipType_QStringList, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_name(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_name(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipVal = &sipCpp->name;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QWebPluginFactory_MimeType_name(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_name(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->name = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QWebPluginFactory_MimeType[] = {
    {sipName_description, varget_QWebPluginFactory_MimeType_description, varset_QWebPluginFactory_MimeType_description, 0},
    {sipName_fileExtensions, varget_QWebPluginFactory_MimeType_fileExtensions, varset_QWebPluginFactory_MimeType_fileExtensions, 0},
    {sipName_name, varget_QWebPluginFactory_MimeType_name, varset_QWebPluginFactory_MimeType_name, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_MimeType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__MimeType,
        {0}
    },
    {
        sipNameNr_MimeType,
        {25, 255, 0},
        0, 0,
        0, 0,
        3, variables_QWebPluginFactory_MimeType,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QWebPluginFactory_MimeType,
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
    dealloc_QWebPluginFactory_MimeType,
    assign_QWebPluginFactory_MimeType,
    array_QWebPluginFactory_MimeType,
    copy_QWebPluginFactory_MimeType,
    release_QWebPluginFactory_MimeType,
    cast_QWebPluginFactory_MimeType,
    0,
    0,
    0
},
    0,
    0,
    0
};

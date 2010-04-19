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

#include "sipAPIQtXml.h"

#line 173 "sip/QtXml/qxml.sip"
#include <qxml.h>
#line 39 "sipQtXmlQXmlSimpleReader.cpp"

#line 91 "sip/QtXml/qxml.sip"
#include <qxml.h>
#line 43 "sipQtXmlQXmlSimpleReader.cpp"
#line 307 "sip/QtXml/qxml.sip"
#include <qxml.h>
#line 46 "sipQtXmlQXmlSimpleReader.cpp"
#line 288 "sip/QtXml/qxml.sip"
#include <qxml.h>
#line 49 "sipQtXmlQXmlSimpleReader.cpp"
#line 246 "sip/QtXml/qxml.sip"
#include <qxml.h>
#line 52 "sipQtXmlQXmlSimpleReader.cpp"
#line 223 "sip/QtXml/qxml.sip"
#include <qxml.h>
#line 55 "sipQtXmlQXmlSimpleReader.cpp"
#line 261 "sip/QtXml/qxml.sip"
#include <qxml.h>
#line 58 "sipQtXmlQXmlSimpleReader.cpp"
#line 275 "sip/QtXml/qxml.sip"
#include <qxml.h>
#line 61 "sipQtXmlQXmlSimpleReader.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 64 "sipQtXmlQXmlSimpleReader.cpp"


class sipQXmlSimpleReader : public QXmlSimpleReader
{
public:
    sipQXmlSimpleReader();
    virtual ~sipQXmlSimpleReader();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool feature(const QString&,bool *) const;
    void setFeature(const QString&,bool);
    bool hasFeature(const QString&) const;
    void * property(const QString&,bool *) const;
    void setProperty(const QString&,void *);
    bool hasProperty(const QString&) const;
    void setEntityResolver(QXmlEntityResolver *);
    QXmlEntityResolver * entityResolver() const;
    void setDTDHandler(QXmlDTDHandler *);
    QXmlDTDHandler * DTDHandler() const;
    void setContentHandler(QXmlContentHandler *);
    QXmlContentHandler * contentHandler() const;
    void setErrorHandler(QXmlErrorHandler *);
    QXmlErrorHandler * errorHandler() const;
    void setLexicalHandler(QXmlLexicalHandler *);
    QXmlLexicalHandler * lexicalHandler() const;
    void setDeclHandler(QXmlDeclHandler *);
    QXmlDeclHandler * declHandler() const;
    bool parse(const QXmlInputSource *);
    bool parse(const QXmlInputSource *,bool);
    bool parseContinue();
    bool parse(const QXmlInputSource&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlSimpleReader(const sipQXmlSimpleReader &);
    sipQXmlSimpleReader &operator = (const sipQXmlSimpleReader &);

    char sipPyMethods[22];
};

sipQXmlSimpleReader::sipQXmlSimpleReader(): QXmlSimpleReader(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlSimpleReader::~sipQXmlSimpleReader()
{
    sipCommonDtor(sipPySelf);
}

bool sipQXmlSimpleReader::feature(const QString& a0,bool *a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_feature);

    if (!meth)
        return QXmlSimpleReader::feature(a0,a1);

    extern bool sipVH_QtXml_25(sip_gilstate_t,PyObject *,bool*,const QString&,bool *);

    return sipVH_QtXml_25(sipGILState,meth,0,a0,a1);
}

void sipQXmlSimpleReader::setFeature(const QString& a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_setFeature);

    if (!meth)
    {
        QXmlSimpleReader::setFeature(a0,a1);
        return;
    }

    extern void sipVH_QtXml_24(sip_gilstate_t,PyObject *,bool*,const QString&,bool);

    sipVH_QtXml_24(sipGILState,meth,0,a0,a1);
}

bool sipQXmlSimpleReader::hasFeature(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_hasFeature);

    if (!meth)
        return QXmlSimpleReader::hasFeature(a0);

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,bool*,const QString&);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtXml_QtCore->em_virthandlers[23]))(sipGILState,meth,0,a0);
}

void * sipQXmlSimpleReader::property(const QString& a0,bool *a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_property);

    if (!meth)
        return QXmlSimpleReader::property(a0,a1);

    extern void * sipVH_QtXml_23(sip_gilstate_t,PyObject *,bool*,const QString&,bool *);

    return sipVH_QtXml_23(sipGILState,meth,0,a0,a1);
}

void sipQXmlSimpleReader::setProperty(const QString& a0,void *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_setProperty);

    if (!meth)
    {
        QXmlSimpleReader::setProperty(a0,a1);
        return;
    }

    extern void sipVH_QtXml_22(sip_gilstate_t,PyObject *,bool*,const QString&,void *);

    sipVH_QtXml_22(sipGILState,meth,0,a0,a1);
}

bool sipQXmlSimpleReader::hasProperty(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_hasProperty);

    if (!meth)
        return QXmlSimpleReader::hasProperty(a0);

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,bool*,const QString&);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtXml_QtCore->em_virthandlers[23]))(sipGILState,meth,0,a0);
}

void sipQXmlSimpleReader::setEntityResolver(QXmlEntityResolver *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_setEntityResolver);

    if (!meth)
    {
        QXmlSimpleReader::setEntityResolver(a0);
        return;
    }

    extern void sipVH_QtXml_21(sip_gilstate_t,PyObject *,bool*,QXmlEntityResolver *);

    sipVH_QtXml_21(sipGILState,meth,0,a0);
}

QXmlEntityResolver * sipQXmlSimpleReader::entityResolver() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_entityResolver);

    if (!meth)
        return QXmlSimpleReader::entityResolver();

    extern QXmlEntityResolver * sipVH_QtXml_20(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtXml_20(sipGILState,meth,0);
}

void sipQXmlSimpleReader::setDTDHandler(QXmlDTDHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_setDTDHandler);

    if (!meth)
    {
        QXmlSimpleReader::setDTDHandler(a0);
        return;
    }

    extern void sipVH_QtXml_19(sip_gilstate_t,PyObject *,bool*,QXmlDTDHandler *);

    sipVH_QtXml_19(sipGILState,meth,0,a0);
}

QXmlDTDHandler * sipQXmlSimpleReader::DTDHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_DTDHandler);

    if (!meth)
        return QXmlSimpleReader::DTDHandler();

    extern QXmlDTDHandler * sipVH_QtXml_18(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtXml_18(sipGILState,meth,0);
}

void sipQXmlSimpleReader::setContentHandler(QXmlContentHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_setContentHandler);

    if (!meth)
    {
        QXmlSimpleReader::setContentHandler(a0);
        return;
    }

    extern void sipVH_QtXml_17(sip_gilstate_t,PyObject *,bool*,QXmlContentHandler *);

    sipVH_QtXml_17(sipGILState,meth,0,a0);
}

QXmlContentHandler * sipQXmlSimpleReader::contentHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_contentHandler);

    if (!meth)
        return QXmlSimpleReader::contentHandler();

    extern QXmlContentHandler * sipVH_QtXml_16(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtXml_16(sipGILState,meth,0);
}

void sipQXmlSimpleReader::setErrorHandler(QXmlErrorHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_setErrorHandler);

    if (!meth)
    {
        QXmlSimpleReader::setErrorHandler(a0);
        return;
    }

    extern void sipVH_QtXml_15(sip_gilstate_t,PyObject *,bool*,QXmlErrorHandler *);

    sipVH_QtXml_15(sipGILState,meth,0,a0);
}

QXmlErrorHandler * sipQXmlSimpleReader::errorHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,NULL,sipName_errorHandler);

    if (!meth)
        return QXmlSimpleReader::errorHandler();

    extern QXmlErrorHandler * sipVH_QtXml_14(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtXml_14(sipGILState,meth,0);
}

void sipQXmlSimpleReader::setLexicalHandler(QXmlLexicalHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_setLexicalHandler);

    if (!meth)
    {
        QXmlSimpleReader::setLexicalHandler(a0);
        return;
    }

    extern void sipVH_QtXml_13(sip_gilstate_t,PyObject *,bool*,QXmlLexicalHandler *);

    sipVH_QtXml_13(sipGILState,meth,0,a0);
}

QXmlLexicalHandler * sipQXmlSimpleReader::lexicalHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,NULL,sipName_lexicalHandler);

    if (!meth)
        return QXmlSimpleReader::lexicalHandler();

    extern QXmlLexicalHandler * sipVH_QtXml_12(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtXml_12(sipGILState,meth,0);
}

void sipQXmlSimpleReader::setDeclHandler(QXmlDeclHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_setDeclHandler);

    if (!meth)
    {
        QXmlSimpleReader::setDeclHandler(a0);
        return;
    }

    extern void sipVH_QtXml_11(sip_gilstate_t,PyObject *,bool*,QXmlDeclHandler *);

    sipVH_QtXml_11(sipGILState,meth,0,a0);
}

QXmlDeclHandler * sipQXmlSimpleReader::declHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,NULL,sipName_declHandler);

    if (!meth)
        return QXmlSimpleReader::declHandler();

    extern QXmlDeclHandler * sipVH_QtXml_10(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtXml_10(sipGILState,meth,0);
}

bool sipQXmlSimpleReader::parse(const QXmlInputSource *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_parse);

    if (!meth)
        return QXmlSimpleReader::parse(a0);

    extern bool sipVH_QtXml_9(sip_gilstate_t,PyObject *,bool*,const QXmlInputSource *);

    return sipVH_QtXml_9(sipGILState,meth,0,a0);
}

bool sipQXmlSimpleReader::parse(const QXmlInputSource *a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,NULL,sipName_parse);

    if (!meth)
        return QXmlSimpleReader::parse(a0,a1);

    extern bool sipVH_QtXml_8(sip_gilstate_t,PyObject *,bool*,const QXmlInputSource *,bool);

    return sipVH_QtXml_8(sipGILState,meth,0,a0,a1);
}

bool sipQXmlSimpleReader::parseContinue()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[20],sipPySelf,NULL,sipName_parseContinue);

    if (!meth)
        return QXmlSimpleReader::parseContinue();

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtXml_QtCore->em_virthandlers[1]))(sipGILState,meth,0);
}

bool sipQXmlSimpleReader::parse(const QXmlInputSource& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[21],sipPySelf,sipName_QXmlSimpleReader,sipName_parse);

    if (!meth)
        return 0;

    extern bool sipVH_QtXml_26(sip_gilstate_t,PyObject *,bool*,const QXmlInputSource&);

    return sipVH_QtXml_26(sipGILState,meth,0,a0);
}


extern "C" {static PyObject *meth_QXmlSimpleReader_feature(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_feature(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        bool a1;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::feature(*a0,&a1) : sipCpp->feature(*a0,&a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipBuildResult(0,"(bb)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_feature);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_setFeature(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_setFeature(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        bool a1;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1b",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSimpleReader::setFeature(*a0,a1) : sipCpp->setFeature(*a0,a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_setFeature);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_hasFeature(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_hasFeature(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::hasFeature(*a0) : sipCpp->hasFeature(*a0));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_hasFeature);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_property(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_property(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        bool a1;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QString,&a0,&a0State))
        {
            void *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::property(*a0,&a1) : sipCpp->property(*a0,&a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipBuildResult(0,"(Vb)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_property);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        void * a1;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1v",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSimpleReader::setProperty(*a0,a1) : sipCpp->setProperty(*a0,a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_setProperty);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_hasProperty(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_hasProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::hasProperty(*a0) : sipCpp->hasProperty(*a0));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_hasProperty);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_setEntityResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_setEntityResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlEntityResolver * a0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QXmlEntityResolver,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSimpleReader::setEntityResolver(a0) : sipCpp->setEntityResolver(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_setEntityResolver);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_entityResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_entityResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlSimpleReader,&sipCpp))
        {
            QXmlEntityResolver *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::entityResolver() : sipCpp->entityResolver());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlEntityResolver,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_entityResolver);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_setDTDHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_setDTDHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlDTDHandler * a0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QXmlDTDHandler,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSimpleReader::setDTDHandler(a0) : sipCpp->setDTDHandler(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_setDTDHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_DTDHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_DTDHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlSimpleReader,&sipCpp))
        {
            QXmlDTDHandler *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::DTDHandler() : sipCpp->DTDHandler());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlDTDHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_DTDHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_setContentHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_setContentHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlContentHandler * a0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QXmlContentHandler,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSimpleReader::setContentHandler(a0) : sipCpp->setContentHandler(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_setContentHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_contentHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_contentHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlSimpleReader,&sipCpp))
        {
            QXmlContentHandler *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::contentHandler() : sipCpp->contentHandler());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlContentHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_contentHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_setErrorHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_setErrorHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlErrorHandler * a0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QXmlErrorHandler,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSimpleReader::setErrorHandler(a0) : sipCpp->setErrorHandler(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_setErrorHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_errorHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_errorHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlSimpleReader,&sipCpp))
        {
            QXmlErrorHandler *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::errorHandler() : sipCpp->errorHandler());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlErrorHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_errorHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_setLexicalHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_setLexicalHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlLexicalHandler * a0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QXmlLexicalHandler,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSimpleReader::setLexicalHandler(a0) : sipCpp->setLexicalHandler(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_setLexicalHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_lexicalHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_lexicalHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlSimpleReader,&sipCpp))
        {
            QXmlLexicalHandler *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::lexicalHandler() : sipCpp->lexicalHandler());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlLexicalHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_lexicalHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_setDeclHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_setDeclHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlDeclHandler * a0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QXmlDeclHandler,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSimpleReader::setDeclHandler(a0) : sipCpp->setDeclHandler(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_setDeclHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_declHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_declHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlSimpleReader,&sipCpp))
        {
            QXmlDeclHandler *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::declHandler() : sipCpp->declHandler());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlDeclHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_declHandler);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_parse(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_parse(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlInputSource * a0;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QXmlInputSource,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::parse(a0) : sipCpp->parse(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QXmlInputSource * a0;
        bool a1;
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8b",&sipSelf,sipType_QXmlSimpleReader,&sipCpp,sipType_QXmlInputSource,&a0,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::parse(a0,a1) : sipCpp->parse(a0,a1));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_parse);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSimpleReader_parseContinue(PyObject *, PyObject *);}
static PyObject *meth_QXmlSimpleReader_parseContinue(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSimpleReader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlSimpleReader,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QXmlSimpleReader::parseContinue() : sipCpp->parseContinue());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlSimpleReader,sipName_parseContinue);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlSimpleReader(void *, const sipTypeDef *);}
static void *cast_QXmlSimpleReader(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QXmlSimpleReader)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QXmlReader)->ctd_cast((QXmlReader *)(QXmlSimpleReader *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlSimpleReader(void *, int);}
static void release_QXmlSimpleReader(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlSimpleReader *>(sipCppV);
    else
        delete reinterpret_cast<QXmlSimpleReader *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlSimpleReader(sipSimpleWrapper *);}
static void dealloc_QXmlSimpleReader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlSimpleReader *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlSimpleReader(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QXmlSimpleReader(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QXmlSimpleReader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQXmlSimpleReader *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlSimpleReader();
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QXmlSimpleReader[] = {{32, 255, 1}};


static PyMethodDef methods_QXmlSimpleReader[] = {
    {SIP_MLNAME_CAST(sipName_DTDHandler), meth_QXmlSimpleReader_DTDHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contentHandler), meth_QXmlSimpleReader_contentHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_declHandler), meth_QXmlSimpleReader_declHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_entityResolver), meth_QXmlSimpleReader_entityResolver, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_errorHandler), meth_QXmlSimpleReader_errorHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_feature), meth_QXmlSimpleReader_feature, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasFeature), meth_QXmlSimpleReader_hasFeature, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasProperty), meth_QXmlSimpleReader_hasProperty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lexicalHandler), meth_QXmlSimpleReader_lexicalHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parse), meth_QXmlSimpleReader_parse, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parseContinue), meth_QXmlSimpleReader_parseContinue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_property), meth_QXmlSimpleReader_property, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setContentHandler), meth_QXmlSimpleReader_setContentHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDTDHandler), meth_QXmlSimpleReader_setDTDHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDeclHandler), meth_QXmlSimpleReader_setDeclHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setEntityResolver), meth_QXmlSimpleReader_setEntityResolver, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setErrorHandler), meth_QXmlSimpleReader_setErrorHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFeature), meth_QXmlSimpleReader_setFeature, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setLexicalHandler), meth_QXmlSimpleReader_setLexicalHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QXmlSimpleReader_setProperty, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXml_QXmlSimpleReader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlSimpleReader,
        {0}
    },
    {
        sipNameNr_QXmlSimpleReader,
        {0, 0, 1},
        20, methods_QXmlSimpleReader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QXmlSimpleReader,
    0,
    init_QXmlSimpleReader,
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
    dealloc_QXmlSimpleReader,
    0,
    0,
    0,
    release_QXmlSimpleReader,
    cast_QXmlSimpleReader,
    0,
    0,
    0
},
    0,
    0,
    0
};

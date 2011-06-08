//
// Generated file, do not edit! Created by opp_msgc 4.1 from linklayer/MVRP/MVRPDU.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "MVRPDU_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




MVRPDU_Base::MVRPDU_Base() : EtherFrame()
{
    this->displayString_var = "b=,,,#ffa5a5";
    VIDS_arraysize = 0;
    this->VIDS_var = 0;
    this->PortIndex_var = 0;
}

MVRPDU_Base::MVRPDU_Base(const MVRPDU_Base& other) : EtherFrame()
{
    VIDS_arraysize = 0;
    this->VIDS_var = 0;
    operator=(other);
}

MVRPDU_Base::~MVRPDU_Base()
{
    delete [] VIDS_var;
}

MVRPDU_Base& MVRPDU_Base::operator=(const MVRPDU_Base& other)
{
    if (this==&other) return *this;
    EtherFrame::operator=(other);
    this->displayString_var = other.displayString_var;
    delete [] this->VIDS_var;
    this->VIDS_var = (other.VIDS_arraysize==0) ? NULL : new unsigned int[other.VIDS_arraysize];
    VIDS_arraysize = other.VIDS_arraysize;
    for (unsigned int i=0; i<VIDS_arraysize; i++)
        this->VIDS_var[i] = other.VIDS_var[i];
    this->PortIndex_var = other.PortIndex_var;
    return *this;
}

void MVRPDU_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,(EtherFrame&)*this);
    doPacking(b,this->displayString_var);
    b->pack(VIDS_arraysize);
    doPacking(b,this->VIDS_var,VIDS_arraysize);
    doPacking(b,this->PortIndex_var);
}

void MVRPDU_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(EtherFrame&)*this);
    doUnpacking(b,this->displayString_var);
    delete [] this->VIDS_var;
    b->unpack(VIDS_arraysize);
    if (VIDS_arraysize==0) {
        this->VIDS_var = 0;
    } else {
        this->VIDS_var = new unsigned int[VIDS_arraysize];
        doUnpacking(b,this->VIDS_var,VIDS_arraysize);
    }
    doUnpacking(b,this->PortIndex_var);
}

const char * MVRPDU_Base::getDisplayString() const
{
    return displayString_var.c_str();
}

void MVRPDU_Base::setDisplayString(const char * displayString_var)
{
    this->displayString_var = displayString_var;
}

void MVRPDU_Base::setVIDSArraySize(unsigned int size)
{
    unsigned int *VIDS_var2 = (size==0) ? NULL : new unsigned int[size];
    unsigned int sz = VIDS_arraysize < size ? VIDS_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        VIDS_var2[i] = this->VIDS_var[i];
    for (unsigned int i=sz; i<size; i++)
        VIDS_var2[i] = 0;
    VIDS_arraysize = size;
    delete [] this->VIDS_var;
    this->VIDS_var = VIDS_var2;
}

unsigned int MVRPDU_Base::getVIDSArraySize() const
{
    return VIDS_arraysize;
}

unsigned int MVRPDU_Base::getVIDS(unsigned int k) const
{
    if (k>=VIDS_arraysize) throw cRuntimeError("Array of size %d indexed by %d", VIDS_arraysize, k);
    return VIDS_var[k];
}

void MVRPDU_Base::setVIDS(unsigned int k, unsigned int VIDS_var)
{
    if (k>=VIDS_arraysize) throw cRuntimeError("Array of size %d indexed by %d", VIDS_arraysize, k);
    this->VIDS_var[k]=VIDS_var;
}

unsigned int MVRPDU_Base::getPortIndex() const
{
    return PortIndex_var;
}

void MVRPDU_Base::setPortIndex(unsigned int PortIndex_var)
{
    this->PortIndex_var = PortIndex_var;
}

class MVRPDUDescriptor : public cClassDescriptor
{
  public:
    MVRPDUDescriptor();
    virtual ~MVRPDUDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MVRPDUDescriptor);

MVRPDUDescriptor::MVRPDUDescriptor() : cClassDescriptor("MVRPDU", "EtherFrame")
{
}

MVRPDUDescriptor::~MVRPDUDescriptor()
{
}

bool MVRPDUDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MVRPDU_Base *>(obj)!=NULL;
}

const char *MVRPDUDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MVRPDUDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int MVRPDUDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *MVRPDUDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "displayString",
        "VIDS",
        "PortIndex",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int MVRPDUDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "displayString")==0) return base+0;
    if (fieldName[0]=='V' && strcmp(fieldName, "VIDS")==0) return base+1;
    if (fieldName[0]=='P' && strcmp(fieldName, "PortIndex")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MVRPDUDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "unsigned int",
        "unsigned int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *MVRPDUDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MVRPDUDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MVRPDU_Base *pp = (MVRPDU_Base *)object; (void)pp;
    switch (field) {
        case 1: return pp->getVIDSArraySize();
        default: return 0;
    }
}

std::string MVRPDUDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MVRPDU_Base *pp = (MVRPDU_Base *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getDisplayString());
        case 1: return ulong2string(pp->getVIDS(i));
        case 2: return ulong2string(pp->getPortIndex());
        default: return "";
    }
}

bool MVRPDUDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MVRPDU_Base *pp = (MVRPDU_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setDisplayString((value)); return true;
        case 1: pp->setVIDS(i,string2ulong(value)); return true;
        case 2: pp->setPortIndex(string2ulong(value)); return true;
        default: return false;
    }
}

const char *MVRPDUDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *MVRPDUDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MVRPDU_Base *pp = (MVRPDU_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}



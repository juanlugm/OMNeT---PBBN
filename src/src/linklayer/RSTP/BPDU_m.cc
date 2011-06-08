//
// Generated file, do not edit! Created by opp_msgc 4.1 from linklayer/RSTP/BPDU.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BPDU_m.h"

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




BPDU_Base::BPDU_Base() : EtherFrame()
{
    this->displayString_var = "b=,,,#a5a5ff";
    this->rootPriority_var = 0;
    this->cost_var = 0;
    this->SrcPriority_var = 0;
    this->PortPriority_var = 0;
    this->PortNumber_var = 0;
    this->age_var = 0;
    this->TC_var = 0;
    this->Ack_var = 0;
}

BPDU_Base::BPDU_Base(const BPDU_Base& other) : EtherFrame()
{
    operator=(other);
}

BPDU_Base::~BPDU_Base()
{
}

BPDU_Base& BPDU_Base::operator=(const BPDU_Base& other)
{
    if (this==&other) return *this;
    EtherFrame::operator=(other);
    this->displayString_var = other.displayString_var;
    this->rootPriority_var = other.rootPriority_var;
    this->rootMAC_var = other.rootMAC_var;
    this->cost_var = other.cost_var;
    this->SrcPriority_var = other.SrcPriority_var;
    this->PortPriority_var = other.PortPriority_var;
    this->PortNumber_var = other.PortNumber_var;
    this->age_var = other.age_var;
    this->TC_var = other.TC_var;
    this->Ack_var = other.Ack_var;
    return *this;
}

void BPDU_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,(EtherFrame&)*this);
    doPacking(b,this->displayString_var);
    doPacking(b,this->rootPriority_var);
    doPacking(b,this->rootMAC_var);
    doPacking(b,this->cost_var);
    doPacking(b,this->SrcPriority_var);
    doPacking(b,this->PortPriority_var);
    doPacking(b,this->PortNumber_var);
    doPacking(b,this->age_var);
    doPacking(b,this->TC_var);
    doPacking(b,this->Ack_var);
}

void BPDU_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(EtherFrame&)*this);
    doUnpacking(b,this->displayString_var);
    doUnpacking(b,this->rootPriority_var);
    doUnpacking(b,this->rootMAC_var);
    doUnpacking(b,this->cost_var);
    doUnpacking(b,this->SrcPriority_var);
    doUnpacking(b,this->PortPriority_var);
    doUnpacking(b,this->PortNumber_var);
    doUnpacking(b,this->age_var);
    doUnpacking(b,this->TC_var);
    doUnpacking(b,this->Ack_var);
}

const char * BPDU_Base::getDisplayString() const
{
    return displayString_var.c_str();
}

void BPDU_Base::setDisplayString(const char * displayString_var)
{
    this->displayString_var = displayString_var;
}

int BPDU_Base::getRootPriority() const
{
    return rootPriority_var;
}

void BPDU_Base::setRootPriority(int rootPriority_var)
{
    this->rootPriority_var = rootPriority_var;
}

MACAddress& BPDU_Base::getRootMAC()
{
    return rootMAC_var;
}

void BPDU_Base::setRootMAC(const MACAddress& rootMAC_var)
{
    this->rootMAC_var = rootMAC_var;
}

int BPDU_Base::getCost() const
{
    return cost_var;
}

void BPDU_Base::setCost(int cost_var)
{
    this->cost_var = cost_var;
}

int BPDU_Base::getSrcPriority() const
{
    return SrcPriority_var;
}

void BPDU_Base::setSrcPriority(int SrcPriority_var)
{
    this->SrcPriority_var = SrcPriority_var;
}

int BPDU_Base::getPortPriority() const
{
    return PortPriority_var;
}

void BPDU_Base::setPortPriority(int PortPriority_var)
{
    this->PortPriority_var = PortPriority_var;
}

int BPDU_Base::getPortNumber() const
{
    return PortNumber_var;
}

void BPDU_Base::setPortNumber(int PortNumber_var)
{
    this->PortNumber_var = PortNumber_var;
}

int BPDU_Base::getAge() const
{
    return age_var;
}

void BPDU_Base::setAge(int age_var)
{
    this->age_var = age_var;
}

bool BPDU_Base::getTC() const
{
    return TC_var;
}

void BPDU_Base::setTC(bool TC_var)
{
    this->TC_var = TC_var;
}

bool BPDU_Base::getAck() const
{
    return Ack_var;
}

void BPDU_Base::setAck(bool Ack_var)
{
    this->Ack_var = Ack_var;
}

class BPDUDescriptor : public cClassDescriptor
{
  public:
    BPDUDescriptor();
    virtual ~BPDUDescriptor();

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

Register_ClassDescriptor(BPDUDescriptor);

BPDUDescriptor::BPDUDescriptor() : cClassDescriptor("BPDU", "EtherFrame")
{
}

BPDUDescriptor::~BPDUDescriptor()
{
}

bool BPDUDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BPDU_Base *>(obj)!=NULL;
}

const char *BPDUDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BPDUDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 10+basedesc->getFieldCount(object) : 10;
}

unsigned int BPDUDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<10) ? fieldTypeFlags[field] : 0;
}

const char *BPDUDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "displayString",
        "rootPriority",
        "rootMAC",
        "cost",
        "SrcPriority",
        "PortPriority",
        "PortNumber",
        "age",
        "TC",
        "Ack",
    };
    return (field>=0 && field<10) ? fieldNames[field] : NULL;
}

int BPDUDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "displayString")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "rootPriority")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "rootMAC")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "cost")==0) return base+3;
    if (fieldName[0]=='S' && strcmp(fieldName, "SrcPriority")==0) return base+4;
    if (fieldName[0]=='P' && strcmp(fieldName, "PortPriority")==0) return base+5;
    if (fieldName[0]=='P' && strcmp(fieldName, "PortNumber")==0) return base+6;
    if (fieldName[0]=='a' && strcmp(fieldName, "age")==0) return base+7;
    if (fieldName[0]=='T' && strcmp(fieldName, "TC")==0) return base+8;
    if (fieldName[0]=='A' && strcmp(fieldName, "Ack")==0) return base+9;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BPDUDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "int",
        "MACAddress",
        "int",
        "int",
        "int",
        "int",
        "int",
        "bool",
        "bool",
    };
    return (field>=0 && field<10) ? fieldTypeStrings[field] : NULL;
}

const char *BPDUDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BPDUDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BPDU_Base *pp = (BPDU_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BPDUDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BPDU_Base *pp = (BPDU_Base *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getDisplayString());
        case 1: return long2string(pp->getRootPriority());
        case 2: {std::stringstream out; out << pp->getRootMAC(); return out.str();}
        case 3: return long2string(pp->getCost());
        case 4: return long2string(pp->getSrcPriority());
        case 5: return long2string(pp->getPortPriority());
        case 6: return long2string(pp->getPortNumber());
        case 7: return long2string(pp->getAge());
        case 8: return bool2string(pp->getTC());
        case 9: return bool2string(pp->getAck());
        default: return "";
    }
}

bool BPDUDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BPDU_Base *pp = (BPDU_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setDisplayString((value)); return true;
        case 1: pp->setRootPriority(string2long(value)); return true;
        case 3: pp->setCost(string2long(value)); return true;
        case 4: pp->setSrcPriority(string2long(value)); return true;
        case 5: pp->setPortPriority(string2long(value)); return true;
        case 6: pp->setPortNumber(string2long(value)); return true;
        case 7: pp->setAge(string2long(value)); return true;
        case 8: pp->setTC(string2bool(value)); return true;
        case 9: pp->setAck(string2bool(value)); return true;
        default: return false;
    }
}

const char *BPDUDescriptor::getFieldStructName(void *object, int field) const
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
        "MACAddress",
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<10) ? fieldStructNames[field] : NULL;
}

void *BPDUDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BPDU_Base *pp = (BPDU_Base *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getRootMAC()); break;
        default: return NULL;
    }
}



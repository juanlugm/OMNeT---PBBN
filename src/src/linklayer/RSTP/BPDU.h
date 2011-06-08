 /**
******************************************************
* @file BPDU.h
* @brief RSTP BPDU modification
*
* @author Juan Luis Garrote Molinero
* @version 1.0
* @date Feb 2011
******************************************************/
#ifndef __BPDU_H
#define __BPDU_H

#include <omnetpp.h>
#include "BPDU_m.h"

class cDisplayString;



class BPDU : public BPDU_Base
{
    public:
      BPDU(); //: BPDU_Base() {}
      BPDU(const BPDU& other) : BPDU_Base() {operator=(other);}
      BPDU& operator=(const BPDU& other) {BPDU_Base::operator=(other); return *this;}
      // ADD CODE HERE to redefine and implement pure virtual functions from BPDU_Base
      virtual BPDU *dup() const {return new BPDU(*this);}
};

#endif

 /**
******************************************************
* @file BPDU.cc
* @brief RSTP BPDU modification
*
* @author Juan Luis Garrote Molinero
* @version 1.0
* @date Feb 2011
******************************************************/
#include "BPDU.h"


BPDU::BPDU() : BPDU_Base()
{
	this->setByteLength(35);
}

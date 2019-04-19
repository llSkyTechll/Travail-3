#include "urgenceNationale.h"

UrgenceNationale::UrgenceNationale() : Urgence()
{

}

UrgenceNationale::UrgenceNationale(int inNumeroUrgence, float inCoutBase, int inX, int inY)
	: Urgence(inNumeroUrgence, inCoutBase, inX, inY)
{

}

UrgenceNationale::UrgenceNationale(const UrgenceNationale& inUrgenceNationale)
	: Urgence(inUrgenceNationale)
{

}

UrgenceNationale::~UrgenceNationale()
{

}
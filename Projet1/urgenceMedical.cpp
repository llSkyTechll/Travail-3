#include "urgenceMedical.h"

UrgenceMedical::UrgenceMedical() : Urgence()
{

}

UrgenceMedical::UrgenceMedical(int inNumeroUrgence, float inCoutBase, int inX, int inY)
	: Urgence(inNumeroUrgence, inCoutBase, inX, inY)
{

}

UrgenceMedical::UrgenceMedical(const UrgenceMedical& inUrgenceMedical) 
	: Urgence(inUrgenceMedical)
{

}

UrgenceMedical::~UrgenceMedical()
{

}
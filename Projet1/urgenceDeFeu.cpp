#include "urgenceDeFeu.h"

UrgenceDeFeu::UrgenceDeFeu() : Urgence()
{

}

UrgenceDeFeu::UrgenceDeFeu(int inNumeroUrgence, float inCoutBase, int inX, int inY)
	: Urgence(inNumeroUrgence, inCoutBase, inX, inY)
{

}

UrgenceDeFeu::UrgenceDeFeu(const UrgenceDeFeu& inUrgenceDeFeu)
	: Urgence(inUrgenceDeFeu)
{

}

UrgenceDeFeu::~UrgenceDeFeu()
{

}
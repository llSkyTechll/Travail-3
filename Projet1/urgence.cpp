#include "urgence.h"

Urgence::Urgence():positionUrgence()
{
	numeroUrgence = 0;
	coutBase = 0;
}

Urgence::Urgence(const Urgence& inUrgence):positionUrgence(inUrgence.positionUrgence)
{
	numeroUrgence = inUrgence.numeroUrgence;
	coutBase = inUrgence.coutBase;
}

Urgence::~Urgence()
{
}
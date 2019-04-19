#pragma once
#include <string>
using namespace std;
#include "urgence.h"

class UrgenceMedical : public Urgence
{
protected:
	
public:
	UrgenceMedical();
	UrgenceMedical(int inNumeroUrgence, float inCoutBase, int inX, int inY);
	UrgenceMedical(const UrgenceMedical&);
	virtual ~UrgenceMedical();
};
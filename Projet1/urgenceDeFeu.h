#pragma once
#include <string>
using namespace std;
#include "urgence.h"

class UrgenceDeFeu : public Urgence
{
protected:

public:
	UrgenceDeFeu();
	UrgenceDeFeu(int inNumeroUrgence, float inCoutBase, int inX, int inY);
	UrgenceDeFeu(const UrgenceDeFeu&);
	~UrgenceDeFeu();
	virtual string getTypeUrgence();
};
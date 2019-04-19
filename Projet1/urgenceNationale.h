#pragma once
#include <string>
using namespace std;
#include "urgence.h"

class UrgenceNationale : public Urgence
{
protected:

public :
	UrgenceNationale();
	UrgenceNationale(int inNumeroUrgence, float inCoutBase, int inX, int inY);
	UrgenceNationale(const UrgenceNationale&);
	~UrgenceNationale();
	virtual string getTypeUrgence();
};

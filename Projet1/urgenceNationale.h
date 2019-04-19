#pragma once
#include <string>
using namespace std;
#include "urgence.h"

class UrgenceNationale : public Urgence
{
protected:

public :
	UrgenceNationale();
	UrgenceNationale(const UrgenceNationale&);
	~UrgenceNationale();
};

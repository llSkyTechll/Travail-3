#pragma once
#include <string>
using namespace std;
#include "urgence.h"

class UrgenceMedical : public Urgence
{
protected:
	
public:
	UrgenceMedical();
	UrgenceMedical(const UrgenceMedical&);
	virtual ~UrgenceMedical();
};
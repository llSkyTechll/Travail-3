#pragma once
#include <string>
using namespace std;
#include "urgence.h"

class UrgenceDeFeu : public Urgence
{
protected:

public:
	UrgenceDeFeu();
	UrgenceDeFeu(const UrgenceDeFeu&);
	~UrgenceDeFeu();
};
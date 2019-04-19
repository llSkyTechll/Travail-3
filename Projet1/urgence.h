#pragma once
#include <string>
using namespace std;
#include "position.h"

class Urgence
{
protected:
	int numeroUrgence;
	float coutBase;
	Position positionUrgence;
public:
	Urgence();
	Urgence(const Urgence&);
	virtual ~Urgence();
};
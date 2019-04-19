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
private:
	Urgence();
	Urgence(const Urgence&);
	virtual ~Urgence();
};
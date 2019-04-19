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
	Urgence(int inNumeroUrgence, float inCoutBase, int inX, int inY);
	Urgence(const Urgence&);
	virtual ~Urgence();
	virtual string getTypeUrgence() = 0;
	virtual int getNumeroUrgence();
	virtual float getCoutBase();
	virtual int getPositionX();
	virtual int getPositionY();
};
#pragma once
#include <string>
#include "vehiculeUrgence.h"
using namespace std;

class Ambulance : public VehiculeUrgence
{
protected:

public:
	Ambulance();
	Ambulance(const Ambulance&);
	virtual ~Ambulance();
	virtual int getVitesse();
};
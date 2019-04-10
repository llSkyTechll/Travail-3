#pragma once
#include <string>
using namespace std;
#include "vehicule.h"

class VehiculeUrgence : public Vehicule
{
protected:

public:
	VehiculeUrgence();
	VehiculeUrgence(const VehiculeUrgence&);
	virtual ~VehiculeUrgence();
	bool setVitesse(int);
};
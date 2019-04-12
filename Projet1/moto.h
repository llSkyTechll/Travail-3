#pragma once
#include <string>
#include "VehiculePromenade.h"
using namespace std;

class Moto : public VehiculePromenade
{
protected:

public:
	Moto();
	Moto(const Moto&);
	virtual ~Moto();
	 bool setImmatriculation(string);
	 int getVitesse();
	string getSymbole() const;
};

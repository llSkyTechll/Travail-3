#pragma once
using namespace std;
#include "vehicule.h"

class VehiculePromenade : public Vehicule
{
protected:

public:
	VehiculePromenade();
	VehiculePromenade(const VehiculePromenade&invehiculePromenade);
	virtual ~VehiculePromenade();

	int getVitesse() const;
	string getImmatriculation() const;
	virtual string getSymbole() const;
	virtual bool setImmatriculation(string);
	 bool setVitesse(int);

};



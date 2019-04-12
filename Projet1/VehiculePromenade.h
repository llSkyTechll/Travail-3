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

	virtual int getVitesse() ;
	string getImmatriculation() const;
	virtual string getSymbole() ;
	virtual bool setImmatriculation(string);
	virtual bool setVitesse(int);
};

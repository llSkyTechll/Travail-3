#pragma once
#include <string>
using namespace std;
#include "vehicule.h"
#include "urgence.h"

class VehiculeUrgence : public Vehicule
{
protected:

public:
	VehiculeUrgence();
	VehiculeUrgence(const VehiculeUrgence&);
	virtual ~VehiculeUrgence();
	virtual int getVitesse() = 0;
	virtual string getSymbole() = 0;
	bool setVitesse(int);
	virtual bool setImmatriculation(string) = 0;
	virtual void deplacerVehicule(int, int) = 0;
	virtual bool recupererUrgence(string) = 0;
	virtual float calculerCoutUrgence(int,int,float) = 0;
};
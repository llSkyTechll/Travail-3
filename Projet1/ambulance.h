#pragma once
#include <string>
#include "vehiculeUrgence.h"
using namespace std;
#include "urgenceMedical.h"

class Ambulance : public VehiculeUrgence
{
protected:

public:
	Ambulance();
	Ambulance(const Ambulance&);
	virtual ~Ambulance();
	virtual int getVitesse();
	virtual string getSymbole();
	virtual bool setImmatriculation(string);
	void deplacerVehicule(int, int);
	virtual bool recupererUrgence(string);
	virtual float calculerCoutUrgence(int,int,float);
};
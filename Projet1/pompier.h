#pragma once
#include <string>
#include "vehiculeUrgence.h"
using namespace std;

class Pompier : public VehiculeUrgence
{
protected:

public:
	Pompier();
	Pompier(const Pompier&);
	virtual ~Pompier();
	virtual int getVitesse();
	virtual string getSymbole();
	virtual bool setImmatriculation(string);
	void deplacerVehicule(int, int);
	virtual bool recupererUrgence(string);
	virtual float calculerCoutUrgence(int, int, float);
};
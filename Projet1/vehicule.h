#pragma once
#include <string>
using namespace std;
#include "position.h"

class Vehicule
{
protected:
	int vitesseVehicule;
	string immatriculation;
	Position positionVehicule;
public:
	Vehicule();
	Vehicule(const Vehicule&);
	virtual ~Vehicule();
	virtual string getImmatriculation() const;
	virtual int getVitesse() = 0;
	virtual string getSymbole() = 0;
	virtual bool setImmatriculation(string) = 0;
	virtual bool setVitesse(int);
	bool setPosition(int, int);
	int getPositionX() const;
	int getPositionY() const;
	virtual void deplacerVehicule(int,int) = 0;
};
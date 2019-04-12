#include "vehicule.h"

Vehicule::Vehicule():positionVehicule()
{
	immatriculation = "";
	vitesseVehicule = 0;
}

Vehicule::Vehicule(const Vehicule &inVehicule):positionVehicule(inVehicule.positionVehicule)
{
	immatriculation = inVehicule.immatriculation;
	vitesseVehicule = inVehicule.vitesseVehicule;
}

Vehicule::~Vehicule()
{
}

string Vehicule::getImmatriculation() const
{
	return immatriculation;
}

bool Vehicule::setVitesse(int inVitesse)
{
	return false;
}

bool Vehicule::setPosition(int inX, int inY)
{
	return positionVehicule.setPosition(inX, inY);
}
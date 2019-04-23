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
int Vehicule::getPositionX()const
{
	return positionVehicule.getPositionX();
}
int Vehicule::getPositionY()const
{
	return positionVehicule.getPositionY();
}
bool Vehicule::recupererUrgence(string inUrgence)
{
	return false;
}

float Vehicule::calculerCoutUrgence(int inX, int inY, float inCoutBase)
{
	return (0);
}

bool Vehicule::setVitesse(int inVitesse)
{
	return false;
}

bool Vehicule::setPosition(int inX, int inY)
{
	return positionVehicule.setPosition(inX, inY);
}
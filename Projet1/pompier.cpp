#include "pompier.h"

Pompier::Pompier() : VehiculeUrgence()
{

}

Pompier::Pompier(const Pompier &inPompier) : VehiculeUrgence(inPompier)
{

}

Pompier::~Pompier()
{

}

int Pompier::getVitesse()
{
	return 2 * vitesseVehicule;
}

string Pompier::getSymbole()
{
	return "FM";
}

bool Pompier::setImmatriculation(string inImmatriculation)
{
	if (inImmatriculation.substr(0, 1) == "PO")
	{
		immatriculation = inImmatriculation;
		return true;
	}
	return false;
}
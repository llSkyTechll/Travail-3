#include "ambulance.h"

Ambulance::Ambulance():VehiculeUrgence()
{

}

Ambulance::Ambulance(const Ambulance &inAmbulance) : VehiculeUrgence(inAmbulance)
{

}

Ambulance::~Ambulance()
{

}

int Ambulance::getVitesse()
{
	return 3 * vitesseVehicule;
}

string Ambulance::getSymbole()
{
	return "LS";
}

bool Ambulance::setImmatriculation(string inImmatriculation)
{
	if (inImmatriculation.substr(0, 1) == "AM")
	{
		immatriculation = inImmatriculation;
		return true;
	}
	return false;
}
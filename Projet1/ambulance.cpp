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
#include "vehiculeUrgence.h"

VehiculeUrgence::VehiculeUrgence():Vehicule()
{
}

VehiculeUrgence::VehiculeUrgence(const VehiculeUrgence &inVehicule):Vehicule(inVehicule)
{
}

VehiculeUrgence::~VehiculeUrgence()
{
}

bool VehiculeUrgence::setVitesse(int inVitesse)
{
	if (inVitesse == 1 || inVitesse == 2 || inVitesse == 3)
	{
		vitesseVehicule = inVitesse;
		return true;
	}
	else
	{
		return false;
	}
}
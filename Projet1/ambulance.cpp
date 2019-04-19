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
	if (inImmatriculation.substr(0, 2) == "AM")
	{
		immatriculation = inImmatriculation;
		return true;
	}
	return false;
}

void Ambulance::deplacerVehicule(int inX, int inY)
{
	float DeltaY = (inY - positionVehicule.getPositionY());
	float DeltaX = (inX - positionVehicule.getPositionX());
	float a = (DeltaY / DeltaX);
	float b = inY - (a*inX);
	if (positionVehicule.getPositionX() != inX)
	{
		if (positionVehicule.getPositionX() < inX)
		{
			positionVehicule.setPosition((positionVehicule.getPositionX() + (3 * vitesseVehicule)), (a*(positionVehicule.getPositionX() + (3 * vitesseVehicule)) + b));
			if (positionVehicule.getPositionX() > inX)
			{
				positionVehicule.setPosition(inX, positionVehicule.getPositionY());
			}
		}
		else
		{
			positionVehicule.setPosition((positionVehicule.getPositionX() - (3 * vitesseVehicule)), (a*(positionVehicule.getPositionX() - (3 * vitesseVehicule)) + b));
			if (positionVehicule.getPositionX() < inX)
			{
				positionVehicule.setPosition(inX, positionVehicule.getPositionY());
			}
		}
	}
	else
	{
		positionVehicule.setPosition(inX, inY);
	}
}

bool Ambulance::recupererUrgence(string inUrgence)
{
	if (inUrgence == "Medical")
	{
		return true;
	}
	return false;
}
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
	if (inImmatriculation.substr(0, 2) == "PO")
	{
		immatriculation = inImmatriculation;
		return true;
	}
	return false;
}

void Pompier::deplacerVehicule(int inX, int inY)
{
	float DeltaY = (inY - positionVehicule.getPositionY());
	float DeltaX = (inX - positionVehicule.getPositionX());
	float a = (DeltaY / DeltaX);
	float b = inY - (a*inX);
	if (positionVehicule.getPositionX() != inX)
	{
		if (positionVehicule.getPositionX() < inX)
		{
			positionVehicule.setPosition((positionVehicule.getPositionX() + (2 * vitesseVehicule)), (a*(positionVehicule.getPositionX() + (2 * vitesseVehicule)) + b));
			if (positionVehicule.getPositionX() > inX)
			{
				positionVehicule.setPosition(inX, positionVehicule.getPositionY());
			}
		}
		else
		{
			positionVehicule.setPosition((positionVehicule.getPositionX() - (2 * vitesseVehicule)), (a*(positionVehicule.getPositionX() - (2 * vitesseVehicule)) + b));
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

bool Pompier::recupererUrgence(string inUrgence)
{
	if (inUrgence == "Incendie")
	{
		return true;
	}
	return false;
}

float Pompier::calculerCoutUrgence(int inX, int inY, float inCoutBase)
{
	float distance = sqrt((pow((inX - positionVehicule.getPositionX()), 2))
		+ pow((inY - positionVehicule.getPositionY()), 2));
	return (inCoutBase * distance * 2);
}
#include "moto.h"

Moto::Moto() :VehiculePromenade()
{

}

Moto::Moto(const Moto &inMoto) : VehiculePromenade(inMoto)
{

}

Moto::~Moto()
{

}

bool Moto::setImmatriculation(string inImmatriculation)
{
	//'' pour un caractere
	//"" pour une chaine
	bool valide = false;
	if (inImmatriculation.substr(0, 2) == "MO")
	{
		immatriculation = inImmatriculation;
		valide = true;
	}
	return valide;
}

int Moto::getVitesse() 
{
	return vitesseVehicule;
}

string Moto::getSymbole() 
{
	return "GANG";
}

void Moto::deplacerVehicule(int inX, int inY)
{
	if (positionVehicule.getPositionX() != inX)
	{
		if (positionVehicule.getPositionX() < inX)
		{
			positionVehicule.setPosition((positionVehicule.getPositionX() + vitesseVehicule), positionVehicule.getPositionY());
			if (positionVehicule.getPositionX() > inX)
			{
				positionVehicule.setPosition(inX, positionVehicule.getPositionY());
			}
		}
		else
		{
			positionVehicule.setPosition((positionVehicule.getPositionX() - vitesseVehicule), positionVehicule.getPositionY());
			if (positionVehicule.getPositionX() < inX)
			{
				positionVehicule.setPosition(inX, positionVehicule.getPositionY());
			}
		}
	}
	else
	{
		if (positionVehicule.getPositionY() != inY)
		{
			if (positionVehicule.getPositionY() < inY)
			{
				positionVehicule.setPosition(inX, (positionVehicule.getPositionY() + vitesseVehicule));
				if (positionVehicule.getPositionX() > inY)
				{
					positionVehicule.setPosition(positionVehicule.getPositionX(), inY);
				}
			}
			else
			{
				positionVehicule.setPosition(inX, (positionVehicule.getPositionY() - vitesseVehicule));
				if (positionVehicule.getPositionX() < inY)
				{
					positionVehicule.setPosition(positionVehicule.getPositionX(), inY);
				}
			}
		}
	}
}
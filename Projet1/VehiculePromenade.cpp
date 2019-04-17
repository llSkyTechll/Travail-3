#include"VehiculePromenade.h"

VehiculePromenade::VehiculePromenade():Vehicule()
{
	immatriculation = "";
	vitesseVehicule = 0;
}

VehiculePromenade::VehiculePromenade(const VehiculePromenade &invehiculePromenade) :Vehicule(invehiculePromenade)
{
	immatriculation = invehiculePromenade.immatriculation;
	vitesseVehicule = invehiculePromenade.vitesseVehicule;
}

VehiculePromenade::~VehiculePromenade()
{
}

int VehiculePromenade::getVitesse()
{
	return vitesseVehicule;
}

string VehiculePromenade::getImmatriculation() const
{
	return immatriculation;
}

string VehiculePromenade::getSymbole()
{
	return "VROUM";
}
bool VehiculePromenade::setVitesse(int inVitesse)
{
	bool valide = false;
	if (inVitesse == 1 || inVitesse == 2) 
	{
		vitesseVehicule = inVitesse;
		valide = true;
	}
	return valide;
	
}
bool VehiculePromenade::setImmatriculation(string inImmatriculation)
{
	//'' pour un caractere
	//"" pour une chaine
	bool valide = false;
	if(inImmatriculation.substr(0,2)=="VP")
	{ 
		immatriculation = inImmatriculation;
		valide = true;
	}
	return valide;
}

void VehiculePromenade::deplacerVehicule(int inX, int inY)
{
	float DeltaY = (inY - positionVehicule.getPositionY());
	float DeltaX = (inX - positionVehicule.getPositionX());
	float a = (DeltaY / DeltaX);
	float b = inY - (a*inX);
	if (positionVehicule.getPositionX() != inX)
	{
		if (positionVehicule.getPositionX() < inX)
		{
			positionVehicule.setPosition((positionVehicule.getPositionX() + vitesseVehicule), (a*(positionVehicule.getPositionX() + vitesseVehicule) + b));
			if (positionVehicule.getPositionX() > inX)
			{
				positionVehicule.setPosition(inX, positionVehicule.getPositionY());
			}
		}
		else
		{
			positionVehicule.setPosition((positionVehicule.getPositionX() - vitesseVehicule), (a*(positionVehicule.getPositionX() -  vitesseVehicule) + b));
			if (positionVehicule.getPositionX() < inX)
			{
				positionVehicule.setPosition(inX, positionVehicule.getPositionY());
			}
		}
	}
	else
	{
		if (positionVehicule.getPositionY() < inY)
		{
			positionVehicule.setPosition(inX,(positionVehicule.getPositionY() + vitesseVehicule));
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
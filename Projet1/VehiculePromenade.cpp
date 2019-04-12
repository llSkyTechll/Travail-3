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
	if(inImmatriculation.substr(0,1)=="VP")
	{ 
		immatriculation = inImmatriculation;
		valide = true;
	}
	return valide;
}

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
	if (inImmatriculation.substr(0, 1) == "MO")
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
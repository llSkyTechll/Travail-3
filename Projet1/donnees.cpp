#include "donnees.h"

Donnees::Donnees()
{
	for (int cpt = 0; cpt < maxVehicule; cpt++)
	{
		flotteVehicules[maxVehicule] = NULL;
	}
	InitialiserFlotteDepart();
}

Donnees::~Donnees()
{
	for (int cpt = 0; cpt < maxVehicule; cpt++)
	{
		if (flotteVehicules[cpt] != NULL)
		{
			delete flotteVehicules[cpt];
		}
	}
}

void Donnees::InitialiserFlotteDepart()
{
	bool valide = false;
	bool ajout;	
	Vehicule* vehicule = NULL;
	//vehicule = new VehiculePromenade();
	valide = AssignerValeurs(vehicule, 200, 100, "P111", 1);
	if (valide)
	{
		ajout = AjouterVehicule(vehicule);
	}
	//vehicule = new Ambulance();
	valide = AssignerValeurs(vehicule, 400, 100, "A2020", 2);
	if (valide)
	{
		ajout = AjouterVehicule(vehicule);
	}
}
bool Donnees::AssignerValeurs(Vehicule* inVehicule, int inX, int inY, string inImmatriculation, int inVitesse)
{
	bool valide = false;

	return valide;
}
bool Donnees::AjouterVehicule(Vehicule* nouveauVehicule)
{
	bool ajoutEffectue = false;

	return ajoutEffectue;
}

Vehicule* Donnees::getVehicule(int inIndice)
{
	Vehicule* vehicule = NULL;
	if (inIndice>=0 && inIndice<maxVehicule && flotteVehicules[inIndice] != NULL)
	{ 
		vehicule = flotteVehicules[inIndice];
	}
	return vehicule;
}

bool Donnees::EnleverVehicule(int place)
{
	bool detruit = false;
	if (place>=0 && place<maxVehicule)
	{ 
		if (flotteVehicules[place] != NULL)
		{

		}	
	}
	return detruit;
}

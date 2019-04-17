#pragma once
#include "vehicule.h"
#include "VehiculePromenade.h"
#include "vehiculeUrgence.h"
#include "ambulance.h"
#include "moto.h"
#include "pompier.h"
const int maxVehicule = 50;

class Donnees
{
private:
	Vehicule* flotteVehicules[maxVehicule];
	void InitialiserFlotteDepart();
public:
	Donnees::Donnees();
	Donnees::~Donnees();
	Vehicule* getVehicule(int);
	bool AssignerValeurs(Vehicule* inVehicule, int inX, int inY, string inImmatriculation, int inVitesse);
	int AjouterVehicule(Vehicule*);
	bool EnleverVehicule(int);
};


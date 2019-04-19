#pragma once
#include "vehicule.h"
#include "VehiculePromenade.h"
#include "vehiculeUrgence.h"
#include "ambulance.h"
#include "moto.h"
#include "pompier.h"
#include "urgence.h"
#include "urgenceMedical.h"
#include "urgenceDeFeu.h"
#include "urgenceNationale.h"
const int maxVehicule = 50;
const int maxUrgence = 50;

class Donnees
{
private:
	Vehicule* flotteVehicules[maxVehicule];
	Urgence* listeUrgence[maxUrgence];
	void InitialiserFlotteDepart();	
	void InitialiserLesUrgences();
public:
	Donnees::Donnees();
	Donnees::~Donnees();
	Vehicule* getVehicule(int);
	bool AssignerValeursVehicule(Vehicule* inVehicule, int inX, int inY, string inImmatriculation, int inVitesse);
	bool AssignerValeursUrgence(Urgence* inUrgence, int inX, int inY, float inCoutBase, int inNumeroUrgence);
	int AjouterVehicule(Vehicule*);
	int AjouterUrgence(Urgence*);
	bool EnleverVehicule(int);
};


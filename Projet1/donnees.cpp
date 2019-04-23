#include "donnees.h"

Donnees::Donnees()
{
	for (int cptVehicule = 0; cptVehicule < maxVehicule; cptVehicule++)
	{
		flotteVehicules[cptVehicule] = NULL;
	}
	for (int cptUrgence = 0; cptUrgence < maxUrgence; cptUrgence++)
	{
		listeUrgence[cptUrgence] = NULL;
	}
	InitialiserFlotteDepart();
	InitialiserLesUrgences();
}

Donnees::~Donnees()
{
	for (int cptVehicule = 0; cptVehicule < maxUrgence; cptVehicule++)
	{
		if (flotteVehicules[cptVehicule] != NULL)
		{
			delete flotteVehicules[cptVehicule];
		}
	}
	for (int cptUrgence = 0; cptUrgence < maxUrgence; cptUrgence++)
	{
		if (listeUrgence[cptUrgence] != NULL)
		{
			delete listeUrgence[cptUrgence];
		}
	}
}

void Donnees::InitialiserFlotteDepart()
{
	bool valide = false;
	bool ajout;	
	Vehicule* vehicule = NULL;
	vehicule = new VehiculePromenade();
	valide = AssignerValeursVehicule(vehicule, 200, 100, "VP11", 1);
	if (valide)
	{
		ajout = AjouterVehicule(vehicule);
	}
	vehicule = new Ambulance();
	valide = AssignerValeursVehicule(vehicule, 400, 100, "AM20", 2);
	if (valide)
	{
		ajout = AjouterVehicule(vehicule);
	}
}

void Donnees::InitialiserLesUrgences()
{
	bool valide = false;
	bool ajout;
	Urgence* urgence = NULL;
	//Urgence medical
	urgence = new UrgenceMedical();
	valide = AssignerValeursUrgence(urgence, 150, 200, 50, 1);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
	urgence = new UrgenceMedical();
	valide = AssignerValeursUrgence(urgence, 350, 150, 35, 3);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
	urgence = new UrgenceMedical();
	valide = AssignerValeursUrgence(urgence, 150, 275, 76, 2);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
	urgence = new UrgenceMedical();
	valide = AssignerValeursUrgence(urgence, 175, 200, 15, 4);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
	//Urgence de feu
	urgence = new UrgenceDeFeu();
	valide = AssignerValeursUrgence(urgence, 400, 100, 25, 10);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
	urgence = new UrgenceDeFeu();
	valide = AssignerValeursUrgence(urgence, 350, 350, 35, 6);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
	urgence = new UrgenceDeFeu();
	valide = AssignerValeursUrgence(urgence, 245, 50, 30, 7);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
	urgence = new UrgenceDeFeu();
	valide = AssignerValeursUrgence(urgence, 500, 100, 57, 8);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
	//Urgence nationale
	urgence = new UrgenceNationale();
	valide = AssignerValeursUrgence(urgence, 400, 250, 750, 5);
	if (valide)
	{
		ajout = AjouterUrgence(urgence);
	}
}

bool Donnees::AssignerValeursVehicule(Vehicule* inVehicule, int inX, int inY, string inImmatriculation, int inVitesse)
{
	bool valide = false;
	valide = inVehicule->setPosition(inX, inY);
	valide = inVehicule->setImmatriculation(inImmatriculation);
	valide = inVehicule->setVitesse(inVitesse);
	return valide;
}

bool Donnees::AssignerValeursUrgence(Urgence* inUrgence, int inX, int inY, float inCoutBase, int inNumeroUrgence)
{
	bool valide = false;
	valide = inUrgence->setPositionUrgence(inX,inY);
	valide = inUrgence->setCoutBase(inCoutBase);
	valide = inUrgence->setNumeroUrgence(inNumeroUrgence);
	return valide;
}

int Donnees::AjouterVehicule(Vehicule* nouveauVehicule)
{
	int cpt = 0;
	while(cpt < maxVehicule)
	{
		if (flotteVehicules[cpt] == NULL)
		{
			flotteVehicules[cpt] = nouveauVehicule;
			return cpt;
		}
		cpt++;
	}	
	return -1;
}

int Donnees::AjouterUrgence(Urgence* inUrgence)
{
	int cpt = 0;
	while (cpt < maxUrgence)
	{
		if (listeUrgence[cpt] == NULL)
		{
			listeUrgence[cpt] = inUrgence;
			return cpt;
		}
		cpt++;
	}
	return -1;
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

Urgence* Donnees::getUrgence(int InUrgence)
{
	Urgence* urgence = NULL;
	if (InUrgence >= 0 && InUrgence < maxUrgence && listeUrgence[InUrgence != NULL])
	{
		urgence = listeUrgence[InUrgence];
	}
	return urgence;
}

bool Donnees::EnleverVehicule(int place)
{
	bool detruit = false;
	if (place>=0 && place<maxVehicule)
	{ 
		if (flotteVehicules[place] != NULL)
		{
			delete flotteVehicules[place];
			flotteVehicules[place] = NULL;
			detruit = true;
		}	
	}
	return detruit;
}

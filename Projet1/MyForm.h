#pragma once
#include <msclr\marshal_cppstd.h>
#include "donnees.h"
#include "InformationVehicule.h"

namespace Projet1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	Donnees flotte;
	Vehicule* vehiculeCourant;
	Urgence* urgenceCourante;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::ComboBox^  comboVehicule;
	private: System::Windows::Forms::Button^  btnDeplacer;

	private: System::Windows::Forms::Button^  btnVoiture;
	private: System::Windows::Forms::Button^  btnAmbulance;
	private: System::Windows::Forms::Button^  btnEnlever;
	private: System::Windows::Forms::Button^  btnPompier;
	private: System::Windows::Forms::Button^  btnBizarre;
	private: System::Windows::Forms::ComboBox^  comboUrgences;
	private: System::Windows::Forms::ComboBox^  comboVehiculesDisponibles;
	private: System::Windows::Forms::Label^  lblUrgence;
	private: System::Windows::Forms::Label^  lblVehiculesDisponibles;
	private: System::Windows::Forms::TextBox^  txtCout;
	private: System::Windows::Forms::Label^  lblCout;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboVehicule = (gcnew System::Windows::Forms::ComboBox());
			this->btnDeplacer = (gcnew System::Windows::Forms::Button());
			this->btnVoiture = (gcnew System::Windows::Forms::Button());
			this->btnAmbulance = (gcnew System::Windows::Forms::Button());
			this->btnEnlever = (gcnew System::Windows::Forms::Button());
			this->btnPompier = (gcnew System::Windows::Forms::Button());
			this->btnBizarre = (gcnew System::Windows::Forms::Button());
			this->comboUrgences = (gcnew System::Windows::Forms::ComboBox());
			this->comboVehiculesDisponibles = (gcnew System::Windows::Forms::ComboBox());
			this->lblUrgence = (gcnew System::Windows::Forms::Label());
			this->lblVehiculesDisponibles = (gcnew System::Windows::Forms::Label());
			this->txtCout = (gcnew System::Windows::Forms::TextBox());
			this->lblCout = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboVehicule
			// 
			this->comboVehicule->FormattingEnabled = true;
			this->comboVehicule->Location = System::Drawing::Point(12, 12);
			this->comboVehicule->Name = L"comboVehicule";
			this->comboVehicule->Size = System::Drawing::Size(121, 21);
			this->comboVehicule->TabIndex = 5;
			this->comboVehicule->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboVehicule_SelectedIndexChanged);
			// 
			// btnDeplacer
			// 
			this->btnDeplacer->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnDeplacer->Location = System::Drawing::Point(12, 39);
			this->btnDeplacer->Name = L"btnDeplacer";
			this->btnDeplacer->Size = System::Drawing::Size(121, 25);
			this->btnDeplacer->TabIndex = 6;
			this->btnDeplacer->Text = L"Déplacer";
			this->btnDeplacer->UseVisualStyleBackColor = true;
			this->btnDeplacer->Click += gcnew System::EventHandler(this, &MyForm::btnDeplacer_Click);
			// 
			// btnVoiture
			// 
			this->btnVoiture->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnVoiture->Location = System::Drawing::Point(12, 70);
			this->btnVoiture->Name = L"btnVoiture";
			this->btnVoiture->Size = System::Drawing::Size(121, 25);
			this->btnVoiture->TabIndex = 8;
			this->btnVoiture->Text = L"nouvelle voiture";
			this->btnVoiture->UseVisualStyleBackColor = true;
			this->btnVoiture->Click += gcnew System::EventHandler(this, &MyForm::btnVoiture_Click);
			// 
			// btnAmbulance
			// 
			this->btnAmbulance->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnAmbulance->Location = System::Drawing::Point(12, 101);
			this->btnAmbulance->Name = L"btnAmbulance";
			this->btnAmbulance->Size = System::Drawing::Size(121, 25);
			this->btnAmbulance->TabIndex = 9;
			this->btnAmbulance->Text = L"nouvel ambulance";
			this->btnAmbulance->UseVisualStyleBackColor = true;
			this->btnAmbulance->Click += gcnew System::EventHandler(this, &MyForm::btnVoiture_Click);
			// 
			// btnEnlever
			// 
			this->btnEnlever->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnEnlever->Location = System::Drawing::Point(12, 194);
			this->btnEnlever->Name = L"btnEnlever";
			this->btnEnlever->Size = System::Drawing::Size(121, 25);
			this->btnEnlever->TabIndex = 10;
			this->btnEnlever->Text = L"Enlever véhicule";
			this->btnEnlever->UseVisualStyleBackColor = true;
			this->btnEnlever->Click += gcnew System::EventHandler(this, &MyForm::btnEnlever_Click);
			// 
			// btnPompier
			// 
			this->btnPompier->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPompier->Location = System::Drawing::Point(12, 132);
			this->btnPompier->Name = L"btnPompier";
			this->btnPompier->Size = System::Drawing::Size(121, 25);
			this->btnPompier->TabIndex = 11;
			this->btnPompier->Text = L"nouveau pompier";
			this->btnPompier->UseVisualStyleBackColor = true;
			this->btnPompier->Click += gcnew System::EventHandler(this, &MyForm::btnVoiture_Click);
			// 
			// btnBizarre
			// 
			this->btnBizarre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnBizarre->Location = System::Drawing::Point(12, 163);
			this->btnBizarre->Name = L"btnBizarre";
			this->btnBizarre->Size = System::Drawing::Size(121, 25);
			this->btnBizarre->TabIndex = 12;
			this->btnBizarre->Text = L"nouveau bizarre";
			this->btnBizarre->UseVisualStyleBackColor = true;
			this->btnBizarre->Click += gcnew System::EventHandler(this, &MyForm::btnVoiture_Click);
			// 
			// comboUrgences
			// 
			this->comboUrgences->FormattingEnabled = true;
			this->comboUrgences->Location = System::Drawing::Point(161, 39);
			this->comboUrgences->Name = L"comboUrgences";
			this->comboUrgences->Size = System::Drawing::Size(121, 21);
			this->comboUrgences->TabIndex = 13;
			this->comboUrgences->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboUrgences_SelectedIndexChanged);
			// 
			// comboVehiculesDisponibles
			// 
			this->comboVehiculesDisponibles->FormattingEnabled = true;
			this->comboVehiculesDisponibles->Location = System::Drawing::Point(361, 39);
			this->comboVehiculesDisponibles->Name = L"comboVehiculesDisponibles";
			this->comboVehiculesDisponibles->Size = System::Drawing::Size(121, 21);
			this->comboVehiculesDisponibles->TabIndex = 14;
			this->comboVehiculesDisponibles->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboVehiculesDisponibles_SelectedIndexChanged);
			// 
			// lblUrgence
			// 
			this->lblUrgence->AutoSize = true;
			this->lblUrgence->Location = System::Drawing::Point(161, 20);
			this->lblUrgence->Name = L"lblUrgence";
			this->lblUrgence->Size = System::Drawing::Size(56, 13);
			this->lblUrgence->TabIndex = 15;
			this->lblUrgence->Text = L"Urgences:";
			// 
			// lblVehiculesDisponibles
			// 
			this->lblVehiculesDisponibles->AutoSize = true;
			this->lblVehiculesDisponibles->Location = System::Drawing::Point(358, 20);
			this->lblVehiculesDisponibles->Name = L"lblVehiculesDisponibles";
			this->lblVehiculesDisponibles->Size = System::Drawing::Size(111, 13);
			this->lblVehiculesDisponibles->TabIndex = 16;
			this->lblVehiculesDisponibles->Text = L"Véhicules disponibles:";
			// 
			// txtCout
			// 
			this->txtCout->Enabled = false;
			this->txtCout->Location = System::Drawing::Point(546, 39);
			this->txtCout->Name = L"txtCout";
			this->txtCout->Size = System::Drawing::Size(100, 20);
			this->txtCout->TabIndex = 17;
			// 
			// lblCout
			// 
			this->lblCout->AutoSize = true;
			this->lblCout->Location = System::Drawing::Point(543, 20);
			this->lblCout->Name = L"lblCout";
			this->lblCout->Size = System::Drawing::Size(32, 13);
			this->lblCout->TabIndex = 18;
			this->lblCout->Text = L"Cout:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1028, 629);
			this->Controls->Add(this->lblCout);
			this->Controls->Add(this->txtCout);
			this->Controls->Add(this->lblVehiculesDisponibles);
			this->Controls->Add(this->lblUrgence);
			this->Controls->Add(this->comboVehiculesDisponibles);
			this->Controls->Add(this->comboUrgences);
			this->Controls->Add(this->btnBizarre);
			this->Controls->Add(this->btnPompier);
			this->Controls->Add(this->btnEnlever);
			this->Controls->Add(this->btnAmbulance);
			this->Controls->Add(this->btnVoiture);
			this->Controls->Add(this->btnDeplacer);
			this->Controls->Add(this->comboVehicule);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		InitialiserCombo();
		vehiculeCourant = NULL;
		CreerLesVehicules();
	}

	void InitialiserCombo()
	{
		comboVehicule->Items->Clear();
		for (int cpt=0; cpt < maxVehicule; cpt++ )
		{
			if (flotte.getVehicule(cpt) != NULL)
			{
			comboVehicule->Items->Add(gcnew String (flotte.getVehicule(cpt)->getImmatriculation().c_str()));
			}
		}
		comboUrgences->Items->Clear();
		for (int cptUrgences = 0; cptUrgences < maxUrgence; cptUrgences++)
		{
			if (flotte.getUrgence(cptUrgences) != NULL)
			{
				comboUrgences->Items->Add(flotte.getUrgence(cptUrgences)->getNumeroUrgence().ToString());
			}
		}
	}

	void CreerLesVehicules()
	{
		for (int cpt=0; cpt < maxVehicule; cpt++)
		{
			if (flotte.getVehicule(cpt) != NULL)
			{
				Label^ nouveauLabel = CreerConteneurDuVehicule(cpt);
				AfficherUnVehicule(flotte.getVehicule(cpt), nouveauLabel);
			}
		}
	}

	//affiche le véhicule reçu en paramètre dans le label reçu en paramètre
	//le véhicule doit s'afficher au bon endroit à l'aide du bon symbole
	void AfficherUnVehicule(Vehicule* unVehicule, Label^ label)
	{
		int x = unVehicule->getPositionX();
		int y = unVehicule->getPositionY();
		label->Location = System::Drawing::Point(x, y);
		label->Name = gcnew String(unVehicule->getImmatriculation().c_str());
		label->Text = gcnew String(unVehicule->getSymbole().c_str());
	}

	//crée un label de façon dynamique afin d'y faire afficher un véhicule
	Label^ CreerConteneurDuVehicule(int inPosition)
	{
		Label^  nouveauLabel;
		nouveauLabel = gcnew System::Windows::Forms::Label();
		nouveauLabel->AutoSize = true;
		nouveauLabel->Location = System::Drawing::Point(1, 1);
		nouveauLabel->Size = System::Drawing::Size(10, 10);
		nouveauLabel->Text = gcnew String(flotte.getVehicule(inPosition)->getSymbole().c_str());
		this->Controls->Add(nouveauLabel);
		return nouveauLabel;
	}

	//déplace le véhicule dont l'immatriculation est sélectionnée dans le comboBox
	private: System::Void btnDeplacer_Click(System::Object^  sender, System::EventArgs^  e) {
		//donnez les bonnes valeurs aux variables pour les afficher dans la nouvelle fenêtre
		Vehicule* leVehicule = NULL;
		int x = 1;
		int y = 1;
		int vitesse = 1;
		String^ immatriculation = "";
		int cpt = 0;
		bool trouve = false;
		if (comboVehicule->Text != "")
		{
			while (trouve == false && cpt < maxVehicule)
			{
				if (flotte.getVehicule(cpt) != NULL)
				{
					leVehicule = flotte.getVehicule(cpt);
					if (gcnew String(leVehicule->getImmatriculation().c_str()) == comboVehicule->Text)
					{
						vitesse = leVehicule->getVitesse();
						immatriculation = gcnew String(leVehicule->getImmatriculation().c_str());
						x = leVehicule->getPositionX();
						y = leVehicule->getPositionY();
						trouve = true;
					}
					else
					{
						leVehicule = NULL;
						cpt++;
					}
				}
				else
				{
					cpt++;
				}
			}
			Label^ label = TrouverConteneurDuVehicule(gcnew String(leVehicule->getImmatriculation().c_str()));
			//ouvre une fenêtre de dialogue permettant d'indiquer la nouvelle position désirée
			InformationVehicule^ fenetreDetails = gcnew InformationVehicule(x, y, immatriculation, vitesse);
			if (fenetreDetails->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				//récupérer valeurs x et y entrés dans la fenêtre de dialogue
				x = fenetreDetails->getValeurX();
				y = fenetreDetails->getValeurY();
				//déplacement du véhicule à l'écran
				while (x != leVehicule->getPositionX() || y != leVehicule->getPositionY())
				{
					leVehicule->deplacerVehicule(x, y);
					AfficherUnVehicule(leVehicule, label);
					Sleep(20);
				}
			}
		}
		else
		{
			MessageBox::Show("Veuillez sélectionner un véhicule.");
		}
	}

	//permet de trouver le label représentant le véhicule désiré
	Label^ TrouverConteneurDuVehicule(String^ immatriculation)
	{
		Label^ label = nullptr;
		int cpt = 0;
		bool trouve = false;
		while (cpt < Controls->Count && trouve==false)
		{
			if (Controls[cpt]->GetType()->ToString() == "System.Windows.Forms.Label")
			{
				if (((Label^)Controls[cpt])->Name == immatriculation)
				{
					label = (Label^)Controls[cpt];
					trouve = true;
				}
			}
			cpt++;
		}
		return label;
	}

//création d'un nouveau véhicule
private: System::Void btnVoiture_Click(System::Object^  sender, System::EventArgs^  e) {
	Button^ Boutton = (Button^)sender;
	Vehicule* nouveau = NULL;
	int x, y, vitesse = 0;
	string immatriculation;
	//ouvre une fenêtre de dialogue permettant d'entrer les valeurs du véhicule à créer
	InformationVehicule^ fenetreDetails = gcnew InformationVehicule();
	if (fenetreDetails->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//on récupère les valeurs entrées dans la fenêtre de dialogue
		x = fenetreDetails->getValeurX();
		y = fenetreDetails->getValeurY();
		vitesse = fenetreDetails->getValeurVitesse();
		immatriculation = (msclr::interop::marshal_as<std::string>(fenetreDetails->getValeurImmatriculation()));
		if (Boutton->Name == "btnVoiture")
		{
			nouveau = new VehiculePromenade();
		}
		else if (Boutton->Name == "btnPompier")
		{
			nouveau = new Pompier();
		}
		else if (Boutton->Name == "btnAmbulance")
		{
			nouveau = new Ambulance();
		}
		else
		{
			nouveau = new Moto();
		}
		//ajout du véhicule
		if (nouveau->setPosition(x, y) == true && nouveau->setImmatriculation(immatriculation) == true && nouveau->setVitesse(vitesse) == true)
		{
			int position = flotte.AjouterVehicule(nouveau);
			InitialiserCombo();
			Label^ label = CreerConteneurDuVehicule(position);
			AfficherUnVehicule(nouveau, label);
		}
		else
		{
			MessageBox::Show("Veuiller entrer des valeurs valides");
		}
	}
	else
	{
		MessageBox::Show("Vous devez entrer les valeurs du vehicule");
	}
}

//pour enlever un véhicule de la flotte et le faire disparaître de l'écran
private: System::Void btnEnlever_Click(System::Object^  sender, System::EventArgs^  e) {
		//enlever le bon véhicule de la flotte avant de le faire disparaître de l'écran
	if (comboVehicule->Text != "")
	{
		bool trouve = false;
		int cpt = 0;
		while (cpt < maxVehicule && trouve == false)
		{
			if (gcnew String(flotte.getVehicule(cpt)->getImmatriculation().c_str()) == comboVehicule->Text)
			{
				vehiculeCourant = flotte.getVehicule(cpt);
				Label^ label = TrouverConteneurDuVehicule(gcnew String(vehiculeCourant->getImmatriculation().c_str()));
				
				if (flotte.EnleverVehicule(cpt) == false)
				{
					MessageBox::Show("Problème lors de la suppression du véhicule.");
				}
				else
				{
					MessageBox::Show("Suppression effectuée.");
					Controls->Remove(label);
					comboVehicule->Text = "";
					InitialiserCombo();
				}
				trouve = true;
			}
			else
			{
				cpt++;
			}
		}
	}
	else
	{
		MessageBox::Show("Veuillez sélectionner un véhicule.");
	}
}

private: System::Void comboVehicule_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void comboUrgences_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	comboVehiculesDisponibles->Items->Clear();
	txtCout->Text = "0";
	for (int cptUrgences = 0; cptUrgences < maxUrgence; cptUrgences++)
	{
		if (flotte.getUrgence(cptUrgences)  != NULL && flotte.getUrgence(cptUrgences)->getNumeroUrgence() == Convert::ToInt32(comboUrgences->Text))
		{
			urgenceCourante = flotte.getUrgence(cptUrgences);
		}
	}
	if (urgenceCourante != NULL)
	{
		for (int cpt = 0; cpt < maxVehicule; cpt++)
		{
			if (flotte.getVehicule(cpt) != NULL && flotte.getVehicule(cpt)->recupererUrgence(urgenceCourante->getTypeUrgence()) == true)
			{
				comboVehiculesDisponibles->Items->Add(gcnew String(flotte.getVehicule(cpt)->getImmatriculation().c_str()));
			}
		}
	}
}
private: System::Void comboVehiculesDisponibles_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	for (int cpt = 0; cpt < maxVehicule; cpt++)
	{
		if (flotte.getVehicule(cpt) != NULL && flotte.getVehicule(cpt)->getImmatriculation() == msclr::interop::marshal_as<std::string>(comboVehiculesDisponibles->Text))
		{
			vehiculeCourant = flotte.getVehicule(cpt);
			txtCout->Text = (vehiculeCourant->calculerCoutUrgence(urgenceCourante->getPositionX(), urgenceCourante->getPositionY(), urgenceCourante->getCoutBase()).ToString());
		}
	}
	Label^ label = TrouverConteneurDuVehicule(gcnew String(vehiculeCourant->getImmatriculation().c_str()));
	while (urgenceCourante->getPositionX() != vehiculeCourant->getPositionX() || urgenceCourante->getPositionY() != vehiculeCourant->getPositionY())
	{
		vehiculeCourant->deplacerVehicule(urgenceCourante->getPositionX(), urgenceCourante->getPositionY());
		AfficherUnVehicule(vehiculeCourant, label);
		Sleep(20);
	}
	for (int cptUrgence = 0; cptUrgence < maxUrgence; cptUrgence++)
	{
		if (flotte.getUrgence(cptUrgence) != NULL && flotte.getUrgence(cptUrgence) == urgenceCourante)
		{
			flotte.EnleverUrgence(cptUrgence);
			urgenceCourante = NULL;
		}
	}
	InitialiserCombo();
	comboVehiculesDisponibles->Refresh();
}
};
}

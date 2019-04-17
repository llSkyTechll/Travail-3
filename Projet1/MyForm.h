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

	/// <summary>
	/// Description r�sum�e de MyForm
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
		/// Nettoyage des ressources utilis�es.
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

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->SuspendLayout();
			// 
			// comboVehicule
			// 
			this->comboVehicule->FormattingEnabled = true;
			this->comboVehicule->Location = System::Drawing::Point(12, 12);
			this->comboVehicule->Name = L"comboVehicule";
			this->comboVehicule->Size = System::Drawing::Size(121, 21);
			this->comboVehicule->TabIndex = 5;
			// 
			// btnDeplacer
			// 
			this->btnDeplacer->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnDeplacer->Location = System::Drawing::Point(12, 39);
			this->btnDeplacer->Name = L"btnDeplacer";
			this->btnDeplacer->Size = System::Drawing::Size(121, 25);
			this->btnDeplacer->TabIndex = 6;
			this->btnDeplacer->Text = L"D�placer";
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
			this->btnEnlever->Text = L"Enlever v�hicule";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1028, 629);
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

	//affiche le v�hicule re�u en param�tre dans le label re�u en param�tre
	//le v�hicule doit s'afficher au bon endroit � l'aide du bon symbole
	void AfficherUnVehicule(Vehicule* unVehicule, Label^ label)
	{
		int x = unVehicule->getPositionX();
		int y = unVehicule->getPositionY();
		label->Location = System::Drawing::Point(x, y);
		label->Name = gcnew String(unVehicule->getImmatriculation().c_str());
		label->Text = gcnew String(unVehicule->getSymbole().c_str());
	}

	//cr�e un label de fa�on dynamique afin d'y faire afficher un v�hicule
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

	//d�place le v�hicule dont l'immatriculation est s�lectionn�e dans le comboBox
	private: System::Void btnDeplacer_Click(System::Object^  sender, System::EventArgs^  e) {
		//donnez les bonnes valeurs aux variables pour les afficher dans la nouvelle fen�tre
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
			//ouvre une fen�tre de dialogue permettant d'indiquer la nouvelle position d�sir�e
			InformationVehicule^ fenetreDetails = gcnew InformationVehicule(x, y, immatriculation, vitesse);
			if (fenetreDetails->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				//r�cup�rer valeurs x et y entr�s dans la fen�tre de dialogue
				x = fenetreDetails->getValeurX();
				y = fenetreDetails->getValeurY();
				//d�placement du v�hicule � l'�cran
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
			MessageBox::Show("Veuillez s�lectionner un v�hicule.");
		}
	}

	//permet de trouver le label repr�sentant le v�hicule d�sir�
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

//cr�ation d'un nouveau v�hicule
private: System::Void btnVoiture_Click(System::Object^  sender, System::EventArgs^  e) {
	Button^ Boutton = (Button^)sender;
	Vehicule* nouveau = NULL;
	int x, y, vitesse = 0;
	string immatriculation;
	//ouvre une fen�tre de dialogue permettant d'entrer les valeurs du v�hicule � cr�er
	InformationVehicule^ fenetreDetails = gcnew InformationVehicule();
	if (fenetreDetails->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//on r�cup�re les valeurs entr�es dans la fen�tre de dialogue
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
		//ajout du v�hicule
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

//pour enlever un v�hicule de la flotte et le faire dispara�tre de l'�cran
private: System::Void btnEnlever_Click(System::Object^  sender, System::EventArgs^  e) {
		//enlever le bon v�hicule de la flotte avant de le faire dispara�tre de l'�cran
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
					MessageBox::Show("Probl�me lors de la suppression du v�hicule.");
				}
				else
				{
					MessageBox::Show("Suppression effectu�e.");
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
		MessageBox::Show("Veuillez s�lectionner un v�hicule.");
	}
}
};
}

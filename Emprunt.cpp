/****************************************************************************
* Fichier: Emprunt.cpp
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: 13 avril 2016
* Description: Fonctions reli�es � classe Emprunt
****************************************************************************/
#include <iostream>
#include "Emprunt.h"

using namespace std;

/****************************************************************************
* Fonction: Emprunt::~Emprunt
* Description: Destructeur
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Emprunt::~Emprunt()
{

}
/****************************************************************************
* Fonction: Emprunt::obtenirMatricule
* Description: Retourne la valeur de matricule_
* Param�tres: aucun
* Retour: (string) la valeur de matricule_
****************************************************************************/
string Emprunt::obtenirMatricule() const
{
	return matricule_;
}


/****************************************************************************
* Fonction: Emprunt::obtenirDateRetour
* Description: Retourne la valeur de dateRetour_
* Param�tres: aucun
* Retour: (unsigned int) la valeur de dateRetour_
****************************************************************************/
unsigned int Emprunt::obtenirDateRetour() const
{
	return dateRetour_;
}
/****************************************************************************
* Fonction: Emprunt::modifierMatricule
* Description: Modifie la valeur de matricule_
* Param�tres: - string matricule: la nouvelle valeur de matricule_ (OUT)
* Retour: aucun
****************************************************************************/
void Emprunt::modifierMatricule(const string &matricule)
{
	matricule_ = matricule;
}
/****************************************************************************
* Fonction: Emprunt::modiferDateRetour
* Description: Modifie la valeur de dateRetour_
* Param�tres: - unsigned int date: la nouvelle valeur de dateRetour_ (IN)
* Retour: aucun
****************************************************************************/
void Emprunt::modifierDateRetour(unsigned int date)
{
	dateRetour_ = date;
}


/// TP4
/****************************************************************************
* Fonction: Emprunt::Emprunt
* Description: Constructeur par param�tres
* Param�tres: - string matricule: un matricule (OUT)
*             - ObjetEmpruntable objetEmpruntable: un objet empruntable (OUT)
*             - unsigned int dateRetour : une valeur de date retour (IN)
* Retour: aucun
****************************************************************************/
Emprunt::Emprunt(std::string matricule, ObjetEmpruntable * objEmprunt, unsigned int date)
	: matricule_(matricule), objEmprunt_(objEmprunt), dateRetour_(date)
{
}
/****************************************************************************
* Fonction: Emprunt::obtenirObjetEmpruntable
* Description: Retourne la valeur de objEmprunt_
* Param�tres: aucun
* Retour: (ObjetEmpruntable*) un pointeur d'objet empruntable
****************************************************************************/
ObjetEmpruntable * Emprunt::obtenirObjetEmpruntable() const
{
	return objEmprunt_;
}


/************************************************************************************
* Fonction: Emprunt::operator==
* Description: Retourne true ou false si les deux emprunts ont les m�mes attributs
* Param�tres: - Emprunt emprunt: un emprunt � comparer
* Retour: (bool) true si les emprunts ont les m�mes attributs, false, sinon
************************************************************************************/
bool Emprunt::operator==(const Emprunt& emprunt) const {
	return ((matricule_ == emprunt.matricule_) &&
		(*objEmprunt_ == *emprunt.objEmprunt_) &&
		(dateRetour_ == emprunt.dateRetour_));
};
/************************************************************************************
* Fonction: Emprunt::operator==
* Description: Retourne true ou false si le matricule correspond au str
* Param�tres: - string str: un matricule � comparer
* Retour: (bool) true si les emprunts ont les m�mes attributs, false, sinon
************************************************************************************/
bool Emprunt::operator==(const std::string& str) const
{
	return ((matricule_ == str) || (*objEmprunt_ == str));
}
/**************************************************************************************************
* Fonction: Emprunt::operator==
* Description: Retourne true ou false si les deux emprunts ont le m�me matricule et la m�me cote
* Param�tres: - pair <string, string> pair: deux attributs � comparer
* Retour: (bool) true si les emprunts ont le m�me matricule et la m�me cote, false, sinon
**************************************************************************************************/
bool Emprunt::operator==(const  pair<std::string, std::string>& pair) const
{
	return ((matricule_ == pair.first) && (objEmprunt_->obtenirCote() == pair.second));
}
/************************************************************************************
* Fonction: Emprunt::operator==
* Description: Retourne true ou false si les deux emprunts ont les m�mes attributs
* Param�tres: - string str: un mot cl� � comparer
*             - Emprunt emprunt: un emprunt � comparer
* Retour: (bool) true si str correspond � l'emprunt, false, sinon
************************************************************************************/
bool operator==(const std::string& str, const Emprunt& emprunt)
{
	return (emprunt == str);
}
/**************************************************************************************************
* Fonction: Emprunt::operator==
* Description: Retourne true ou false si les deux emprunts ont le m�me matricule et la m�me cote
* Param�tres: - pair <string, string> pair: deux attributs � comparer
*             - Emprunt emprunt: un emprunt � comparer
* Retour: (bool) true si les emprunts ont le m�me matricule et la m�me cote, false, sinon
**************************************************************************************************/
bool operator==(const  pair<string, string>& pair, const Emprunt& emprunt)
{
	return ((emprunt.obtenirMatricule() == pair.first) && (emprunt.obtenirObjetEmpruntable()->obtenirCote() == pair.second));
}
/*********************************************************************************************
* Fonction: operator <<
* Description: Affichage des attributs concernant un emprunt
* Param�tres: - ostream o: un param�tre de sortie
*             - Emprunt emprunt: un emprunt � afficher (OUT)
* Retour: (ostream) la valeur de o
*********************************************************************************************/
ostream & operator<<(std::ostream & o, const Emprunt & emprunt)
{	

	o << "Usager #" <<
		emprunt.matricule_;
	if (emprunt.objEmprunt_ != nullptr)
	{
		o << ". " << emprunt.objEmprunt_->obtenirNomClasse() << ". ";
	}
	emprunt.objEmprunt_->afficherObjetEmpruntable(o);
	o <<
		"Retour prevu : " << emprunt.dateRetour_ <<
		endl;

	return o;
}

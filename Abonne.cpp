/****************************************************************************
* Fichier: Abonne.cpp
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: 13 avril 2016
* Description: Fonctions reli�es � classe Abonne
****************************************************************************/
#include <iostream>
#include "Abonne.h"

using namespace std;
/****************************************************************************
* Fonction: Abonne::obtenirNomClasse
* Description: Retourne le nom de la classe
* Param�tres: aucun
* Retour: (string) le nom de la classe
****************************************************************************/
std::string Abonne::obtenirNomClasse() const
{
	if (this != nullptr)
	{
		return typeid(*this).name();
	}
	else
	{
		return "nullptr";
	}

}
/****************************************************************************
* Fonction: Abonne::Abonne
* Description: Constructeur par d�faut
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Abonne::Abonne()
	:age_(0)
{

}
/****************************************************************************
* Fonction: Abonne:Abonne
* Description: Constructeur par param�tres
* Param�tres: - string matricule: valeur de matricule_ (OUT)
*             - string nom: valeur de nom_ (OUT)
*	      - string prenom: valeur de prenom_ (OUT)
*	      - unsigned int age: valeur de age_ (IN)
* Retour: aucun
****************************************************************************/
Abonne::Abonne(const std::string & matricule, const std::string & nom, const std::string & prenom, unsigned int age) 
	: matricule_(matricule), nom_(nom), prenom_(prenom), age_(age), limiteEmprunt_(LIMITE_EMPRUNTS)
{

}
/****************************************************************************
* Fonction: Abonne::~Abonne
* Description: Destructeur
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Abonne::~Abonne()
{

}
/****************************************************************************
* Fonction: Abonne::obtenirMatricule
* Description: Retourne matricule_
* Param�tres: aucun
* Retour: (string) la valeur de matricule_
****************************************************************************/
string Abonne::obtenirMatricule() const
{
	return matricule_;
}
/****************************************************************************
* Fonction: Abonne::obtenirNom
* Description: Retourne nom_
* Param�tres: aucun
* Retour: (string) la valeur de nom_
****************************************************************************/
string Abonne::obtenirNom() const
{
	return nom_;
}
/****************************************************************************
* Fonction: Abonne::obtenirPrenom
* Description: Retourne prenom_
* Param�tres: aucun
* Retour: (string) la valeur de prenom_
****************************************************************************/
string Abonne::obtenirPrenom() const
{
	return prenom_;
}
/****************************************************************************
* Fonction: Abonne::obtenirAge
* Description: Retourne age_
* Param�tres: aucun
* Retour: (unsigned int) la valeur de age_
****************************************************************************/
unsigned int Abonne::obtenirAge() const
{
	return age_;
}
/****************************************************************************
* Fonction: Abonne::modifierMatricule
* Description: Modifier matricule_
* Param�tres: - string matricule: la nouvelle valeur de matricule_ (OUT)
* Retour: aucun
****************************************************************************/
void Abonne::modifierMatricule(const string& matricule)
{
	matricule_ = matricule;
}
/****************************************************************************
* Fonction: Abonne::modifierNom
* Description: Modifier nom_
* Param�tres: - string nom: la nouvelle valeur de nom_ (OUT)
* Retour: aucun
****************************************************************************/
void Abonne::modifierNom(const string& nom)
{
	nom_ = nom;
}
/****************************************************************************
* Fonction: Abonne::modifierPrenom
* Description: Modifier prenom_
* Param�tres: - string prenom: la nouvelle valeur de prenom_ (OUT)
* Retour: aucun
****************************************************************************/
void Abonne::modifierPrenom(const string& prenom)
{
	prenom_ = prenom;
}
/****************************************************************************
* Fonction: Abonne::modifierAge
* Description: Modifier age_
* Param�tres: - unsigned int: la nouvelle valeur de age_ (IN)
* Retour: aucun
****************************************************************************/
void Abonne::modifierAge(unsigned int age)
{
	age_ = age;
}

/****************************************************************************
* Fonction: operator <<
* Description: Affiche les informations concernant l'abonne
* Param�tres: - ostream o : un param�tre de sortie (OUT)
*             - Abonne& abonne: un abonne (OUT)
* Retour: (ostream) la valeur de o
****************************************************************************/
ostream & operator<<(ostream & o, const Abonne & abonne)
{
	// Affichage des informations de base
	o << abonne.prenom_ << ", " <<
		abonne.nom_ << ". " <<
		abonne.age_ << " ans. #" <<
		abonne.matricule_ << endl;
	// retour
	return o;

}
/****************************************************************************
* Fonction: Abonne::operator==
* Description: Compare deux abonnes
* Param�tres: Abonne& abonne: un abonne � comparer (OUT)
* Retour: (bool) true si abonne_== abonne, sinon false
****************************************************************************/
bool Abonne::operator==(const Abonne & abonne) const
{
	return
		(matricule_ == abonne.matricule_) &&
		(nom_ == abonne.nom_) &&
		(prenom_ == abonne.prenom_) &&
		(age_ == abonne.age_);
}
/****************************************************************************
* Fonction: Abonne::operator==
* Description: Compare deux matricules
* Param�tres: - string matricule: un matricule � comparer (OUT)
* Retour: (bool) true si matricule_==matricule, sinon false
****************************************************************************/
bool Abonne::operator==(const std::string & matricule) const
{
	return matricule_ == matricule;
}
/****************************************************************************
* Fonction: operator ==
* Description: Compare un abonne et un matricule
* Param�tres: - string matricule: un matricule (OUT)
* 	      - Abonne& abonne: un abonne (OUT)
* Retour: (bool) true si abonne == matricule, sinon false
****************************************************************************/
bool operator==(const std::string & matricule, const Abonne & abonne)
{
	return abonne == matricule;
}

/// _____________TP3__________________
/****************************************************************************
* Fonction: Abonne::obtenirLimiteEmprunt
* Description: Retourne la valeur de limiteEmprunt_
* Param�tres: aucun
* Retour: (unsigned int) la valeur de limiteEmprunt_
****************************************************************************/
unsigned int Abonne::obtenirLimiteEmprunt() const
{
	return limiteEmprunt_;
}

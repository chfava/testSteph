/****************************************************************************
* Fichier: Etudiant.cpp
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: 13 avril 2016
* Description: Fonctions reli�es � classe Etudiant
****************************************************************************/
#include "Etudiant.h"

using namespace std;
/****************************************************************************
* Fonction: Etudiant::Etudiant
* Description: Constructeur par d�faut
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Etudiant::Etudiant() : Abonne(), ecole_("")
{

}
/****************************************************************************
* Fonction: Etudiant::Etudiant
* Description: Constructeur par param�tres
* Param�tres: - string matricule: un matricule (OUT)
*             - string nom: un nom (OUT)
*             - string prenom: un prenom (OUT)
*             - unsigned int age: un age (IN)
*             - string ecole: une ecole (OUT)
* Retour: aucun
****************************************************************************/
Etudiant::Etudiant(const string& matricule, const string& nom, const string& prenom, unsigned int age, const string& ecole) :
	Abonne(matricule, nom, prenom, age), ecole_(ecole)
{

}
/****************************************************************************
* Fonction: Etudiant::~Etudiant
* Description: Destructeur
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Etudiant::~Etudiant()
{

}
/****************************************************************************
* Fonction: Etudiant::obtenirEcole
* Description: Retourne la valeur de ecole_
* Param�tres: aucun
* Retour: (string) la valeur de ecole_
****************************************************************************/
string Etudiant::obtenirEcole() const
{
	return ecole_;
}
/****************************************************************************
* Fonction: Etudiant::modifierEcole
* Description: Modifie la valeur de ecole_
* Param�tres: -string ecole: la nouvelle valeur de ecole_ (OUT)
* Retour: aucun
****************************************************************************/
void Etudiant::modifierEcole(const string& ecole)
{
	ecole_ = ecole;
}
/****************************************************************************
* Fonction: Etudiant::obtenirLimiteEmprunt
* Description: Retourne la limite d'emprunt pour un etudiant
* Param�tres: aucun
* Retour: (unsigned int) la limite d'emprunt pour un etudiant
****************************************************************************/
unsigned int Etudiant::obtenirLimiteEmprunt() const
{
	return Abonne::obtenirLimiteEmprunt() * 2;
}
/****************************************************************************
* Fonction: operator <<
* Description: Affichage des informations concernant un etudiant
* Param�tres: - ostream o : param�tre de sortie (OUT)
*             - Etudiant etudiant: un etudiant � afficher (OUT)
* Retour: (ostream) la valeur de o
****************************************************************************/
ostream & operator<<(ostream & o, const Etudiant & etudiant)
{
	const Abonne* ab = &etudiant;
	return o << (*ab)
		<< "Ecole de provenance : "
		<< etudiant.ecole_ 
		<< "; Limite d'emprunts : " << etudiant.obtenirLimiteEmprunt() << endl;
}

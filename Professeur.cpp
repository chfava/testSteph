/****************************************************************************
* Fichier: Professeur.cpp
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: 13 avril 2016
* Description: Fonctions reli�es � classe Professeur
****************************************************************************/
#include "Professeur.h"
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;
/****************************************************************************
* Fonction: Professeur::Professeur
* Description: Constructeur par d�faut
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Professeur::Professeur() : Abonne()
{

}
/****************************************************************************
* Fonction: Professeur::Professeur
* Description: Constructeur par param�tres
* Param�tres: - string matricule: un matricule (OUT)
*             - string nom: un nom (OUT)
*             - string prenom: un prenom (OUT)
*             - unsigned int age: un age (IN)
*             - vector <string> ecoles: un vecteur d'ecoles (OUT)
* Retour: aucun
****************************************************************************/
Professeur::Professeur(const string& matricule, const string& nom, const string& prenom, unsigned int age, vector<string> ecoles) :
	Abonne(matricule, nom, prenom, age)
{
	copy(ecoles.begin(), ecoles.end(), back_inserter(listEcoles_));
}
/****************************************************************************
* Fonction: Professeur::~Professeur
* Description: Destructeur
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Professeur::~Professeur()
{

}
/****************************************************************************
* Fonction: Professeur::obtenirEcole
* Description: Retourne la valeur de listEcoles_
* Param�tres: aucun
* Retour: (list <string>) la liste d'ecoles du professeur
****************************************************************************/
list<string> Professeur::obtenirEcole() const
{
	return listEcoles_;
}
/****************************************************************************
* Fonction: Professeur::ajouterEcole
* Description: Ajoute une ecole � la liste d'ecoles du professeur
* Param�tres: - string ecole: une ecole � ajouter (OUT)
* Retour: aucun
****************************************************************************/
void Professeur::ajouterEcole(std::string const & ecole)
{
	if (find(listEcoles_.begin(), listEcoles_.end(), ecole) == listEcoles_.end())
		listEcoles_.push_back(ecole);		
}
/****************************************************************************
* Fonction: Professeur::retirerEcole
* Description: V�rifie si l'ecole a �t� retir�
* Param�tres: - string ecole: une ecole � retirer de la liste (OUT)
* Retour: (bool) true si l'ecole est retire, false sinon
****************************************************************************/
bool Professeur::retirerEcole(std::string const & ecole)
{
	size_t sizeAvant = listEcoles_.size();
	listEcoles_.remove(ecole);
	return  (sizeAvant != listEcoles_.size());
}
/****************************************************************************
* Fonction: Professeur::obtenirLimiteEmprunt
* Description: Retourne la limite d'emprunts pour un professeur
* Param�tres: aucun
* Retour: (unsigned int) la limite d'emprunts pour un professeur
****************************************************************************/
unsigned int Professeur::obtenirLimiteEmprunt() const
{
	return Abonne::obtenirLimiteEmprunt()*listEcoles_.size();
}

/****************************************************************************
* Fonction: operator <<
* Description: Affiche les informations pour un professeur
* Param�tres: - ostream o: un param�tre de sortie (OUT)
*             - Professeur professeur: un professeur � afficher (OUT)
* Retour: (ostream) la valeur de o
****************************************************************************/
ostream & operator<<(ostream & o, const Professeur & professeur)
{
	const Abonne* ab = &professeur;
	o << *ab 
	<< "Limite d'emprunts : " << professeur.obtenirLimiteEmprunt() << endl;;
		

	o << "LISTE DES ECOLES : " ;

	// Affichage de la liste des ecoles
	list<string>  liste = professeur.obtenirEcole();
	liste.sort(greater<string>());
	for each(string str in liste)
		o << str << "; ";

	o << endl;
	return o;
}
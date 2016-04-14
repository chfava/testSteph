/****************************************************************************
* Fichier: Livre.cpp
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: 13 avril 2016
* Description: Fonctions reli�es � classe Livre
****************************************************************************/
#include "Livre.h"

using namespace std;
/****************************************************************************
* Fonction: Livre::Livre
* Description: Constructeur par d�faut
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Livre::Livre()
{

}
/*****************************************************************************************
* Fonction: Livre:: Livre
* Description: Constructeur par param�tres
* Param�tres: - string cote: une cote (OUT)
*             - string titre: un titre (OUT)
*             - unsigned int annee: une annee (IN)
*             - unsigned int ageMin: un age minimal pour emprunter le livre (IN)
*             - unsigned int nbExemplaires: le nombre d'exemplaires pour le livre (IN)
*             - string auteur : un auteur (OUT)
*             - string genre: un genre (OUT)
* Retour: aucun
*****************************************************************************************/
Livre::Livre(const std::string & cote, const std::string & titre, unsigned int annee, unsigned int ageMin, unsigned int nbExemplaires, const string & auteur, const string & genre) : 
	ObjetEmpruntable(cote, titre, annee, ageMin, nbExemplaires), auteur_(auteur), genre_(genre)
{

}

/****************************************************************************
* Fonction: Livre:: ~Livre
* Description: Destructeur
* Param�tres: aucun
* Retour: aucun
****************************************************************************/
Livre::~Livre()
{

}
/****************************************************************************
* Fonction: Livre:: obtenirAuteur
* Description: Retourne auteur_
* Param�tres: aucun
* Retour: (string) la valeur de auteur_
****************************************************************************/
std::string Livre::obtenirAuteur() const
{
	return auteur_;
}
/****************************************************************************
* Fonction: Livre::obtenirGenre
* Description: Retourne genre_
* Param�tres: aucun
* Retour: (string) la valeur de genre_
****************************************************************************/
std::string Livre::obtenirGenre() const
{
	return genre_;
}
/****************************************************************************
* Fonction: Livre::modifierAuteur
* Description: Modifie auteur_
* Param�tres: - string auteur: la nouvelle valeur de auteur_ (IN)
* Retour: aucun
****************************************************************************/
void Livre::modifierAuteur(std::string const & auteur)
{
	auteur_ = auteur;
}
/****************************************************************************
* Fonction: Livre::modifierGenre
* Description: Modifie genre_
* Param�tres: - string genre: la nouvelle valeur de genre_ (IN)
* Retour: aucun
****************************************************************************/
void Livre::modifierGenre(std::string const & genre)
{
	genre_ = genre;
}
/************************************************************************************************
* Fonction: Livre::recherche
* Description: Retourne le r�sultat de la recherche
* Param�tres: - string motsCle: le mot recherch� dans les attributs d'un livre (IN)
* Retour: (bool) true si un attribut d'un livre correspond au motsCle, sinon retourne false.
************************************************************************************************/
bool Livre::recherche(const std::string & motsCle) const
{
	std::size_t trouveAuteur = convertirMinuscule(auteur_).find(convertirMinuscule(motsCle));
	std::size_t trouveGenre = convertirMinuscule(genre_).find(convertirMinuscule(motsCle));
	//Utilisation du demasquage pour appeler la m�thode de la classe m�re
	bool trouve = ObjetEmpruntable::recherche(motsCle)
			|| (trouveAuteur != string::npos)
			|| (trouveGenre !=string::npos);

	return trouve;
}
/****************************************************************************
* Fonction: operator <<
* Description: Affiche un livre
* Param�tres: - ostream o (OUT)
*	      - Livre livre : un livre � afficher (OUT)
* Retour: (ostream) o : les attributs d'un livre
****************************************************************************/
ostream & operator<<(ostream & o, Livre const& livre)
{
	const ObjetEmpruntable* obj = &livre;
	o << "Information sur le livre :" << endl;
	o << *obj
		<< " Auteur : " << livre.auteur_
		<< "; Genre : " << livre.genre_ << endl;

	return o;
}

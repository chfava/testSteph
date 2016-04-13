/****************************************************************************
* Fichier: ExceptionEchecEmprunt.cpp
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Fonction reli�e � la classe ExceptionEchecEmprunt
****************************************************************************/

#include "ExceptionEchecEmprunt.h"
#include <string>

using namespace std;

/****************************************************************************
* Fonction: ExceptionEchecEmprunt::ExceptionEchecEmprunt
* Description: Constructeur par param�tres
* Param�tres: string message : un message d'erreur
* Retour: aucun
****************************************************************************/
ExceptionEchecEmprunt::ExceptionEchecEmprunt(string message) : runtime_error(message){
	compteur_++;
}

/****************************************************************************
* Fonction: ExceptionEchecEmprunt::obtenirValeurCompteur
* Description: Retourne compteur_
* Param�tres: aucun
* Retour: (int) la valeur de compteur_
****************************************************************************/
int ExceptionEchecEmprunt::obtenirValeurCompteur() {
	return compteur_;
}


/****************************************************************************
* Fichier: ExceptionEchecEmprunt.cpp
* Auteur(s): Charles-Olivier Favreau et Stéphanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Fonction reliée à la classe ExceptionEchecEmprunt
****************************************************************************/

#include "ExceptionEchecEmprunt.h"
#include <string>

using namespace std;

/****************************************************************************
* Fonction: ExceptionEchecEmprunt::ExceptionEchecEmprunt
* Description: Constructeur par paramètres
* Paramètres: string message : un message d'erreur
* Retour: aucun
****************************************************************************/
ExceptionEchecEmprunt::ExceptionEchecEmprunt(string message) : runtime_error(message){
	compteur_++;
}

/****************************************************************************
* Fonction: ExceptionEchecEmprunt::obtenirValeurCompteur
* Description: Retourne compteur_
* Paramètres: aucun
* Retour: (int) la valeur de compteur_
****************************************************************************/
static int ExceptionEchecEmprunt::obtenirValeurCompteur() {
	return compteur_;
}


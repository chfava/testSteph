/****************************************************************************
* Fichier: ExceptionEchecEmprunt.cpp
* Auteur(s): Charles-Olivier Favreau et Stéphanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Fonction reliée à la classe ExceptionEchecEmprunt
****************************************************************************/

#include "ExceptionEchecEmprunt.h"
#include <string>

/****************************************************************************
* Fonction: ExceptionEchecEmprunt::ExceptionEchecEmprunt
* Description: Constructeur par paramètres
* Paramètres: string message : un message d'erreur
* Retour: aucun
****************************************************************************/
ExceptionEchecEmprunt::ExceptionEchecEmprunt(string message) {
	compteur_++;
}

/****************************************************************************
* Fonction: ExceptionEchecEmprunt::obtenirValeurCompteur
* Description: Retourne compteur_
* Paramètres: aucun
* Retour: (int) la valeur de compteur_
****************************************************************************/
int ExceptionEchecEmprunt::obtenirValeurCompteur() const {
	return compteur_;
}
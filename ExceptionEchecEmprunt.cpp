/****************************************************************************
* Fichier: ExceptionEchecEmprunt.cpp
* Auteur(s): Charles-Olivier Favreau et Stéphanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Fonctions reliés à la classe ExceptionEchecEmprunt
****************************************************************************/

#include "ExceptionEchecEmprunt.h"
#include <string>

ExceptionEchecEmprunt::ExceptionEchecEmprunt(string message) {
	compteur_++;
}

ExceptionEchecEmprunt::obtenirValeurCompteur() const {
	return compteur_;
}
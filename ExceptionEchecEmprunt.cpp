/****************************************************************************
* Fichier: ExceptionEchecEmprunt.cpp
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Fonctions reli�s � la classe ExceptionEchecEmprunt
****************************************************************************/

#include "ExceptionEchecEmprunt.h"
#include <string>

ExceptionEchecEmprunt::ExceptionEchecEmprunt(string message) {
	compteur_++;
}

ExceptionEchecEmprunt::obtenirValeurCompteur() const {
	return compteur_;
}
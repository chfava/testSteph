/****************************************************************************
* Fichier: ExceptionEchecEmprunt.cpp
<<<<<<< HEAD
* Auteur(s): Charles-Olivier Favreau et Stéphanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Fonction reliée à la classe ExceptionEchecEmprunt
=======
* Auteur(s): Charles-Olivier Favreau et StÃ©phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Fonction reliÃ©e Ã  la classe ExceptionEchecEmprunt
>>>>>>> c269624b885c5119e016aa94220210c8b342c43d
****************************************************************************/

#include "ExceptionEchecEmprunt.h"
#include <string>

/****************************************************************************
* Fonction: ExceptionEchecEmprunt::ExceptionEchecEmprunt
<<<<<<< HEAD
* Description: Constructeur par paramètres
* Paramètres: string message : un message d'erreur
=======
* Description: Constructeur par paramÃ¨tres
* ParamÃ¨tres: string message : un message d'erreur
>>>>>>> c269624b885c5119e016aa94220210c8b342c43d
* Retour: aucun
****************************************************************************/
ExceptionEchecEmprunt::ExceptionEchecEmprunt(string message) {
	compteur_++;
}

/****************************************************************************
* Fonction: ExceptionEchecEmprunt::obtenirValeurCompteur
* Description: Retourne compteur_
<<<<<<< HEAD
* Paramètres: aucun
* Retour: (int) la valeur de compteur_
****************************************************************************/
int ExceptionEchecEmprunt::obtenirValeurCompteur() const {
	return compteur_;
}
=======
* ParamÃ¨tres: aucun
* Retour: (int) la valeur de compteur_
****************************************************************************/
static int ExceptionEchecEmprunt::obtenirValeurCompteur() const {
	return compteur_;
}
>>>>>>> c269624b885c5119e016aa94220210c8b342c43d

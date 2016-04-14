/****************************************************************************
* Fichier: ExceptionEchecRetour.cpp
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: 13 avril 2016
* Description: Fonction reli�e � la classe ExceptionEchecRetour
****************************************************************************/

#include "ExceptionEchecRetour.h"
#include <string>

using namespace std;
/****************************************************************************
* Fonction: ExceptionEchecRetour::ExceptionEchecRetour
* Description: Constructeur par param�tres
* Param�tres: string message: un message d'erreur
* Retour: aucun
****************************************************************************/
ExceptionEchecRetour::ExceptionEchecRetour(string message) :runtime_error(message) {};


/****************************************************************************
* Fichier: ExceptionEchecRetour.cpp
* Auteur(s): Charles-Olivier Favreau et Stéphanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Fonctions reliés à la classe ExceptionEchecRetour
****************************************************************************/

#include "ExceptionEchecRetour.h"

ExceptionEchecRetour::ExceptionEchecRetour(string message) :runtime_error(message) {};


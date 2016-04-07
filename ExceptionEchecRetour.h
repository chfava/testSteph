/****************************************************************************
* Fichier: ExceptionEchecRetour
* Auteur(s): Charles-Olivier Favreau et Stéphanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: 28 mars 2016
* Description: Fonctions reliées à classe ExceptionEchecRetour
****************************************************************************/
#include <string>

class ExceptionEchecRetour : public std::runtime_error {
public: 
	ExceptionEchecRetour(string message = "");
};

ExceptionEchecRetour::ExceptionEchecRetour(string message) :runtime_error(message) {};

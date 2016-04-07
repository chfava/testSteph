/****************************************************************************
* Fichier: ExceptionEchecEmprunt.h
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Description de la classe ExceptionEchecEmprunt
****************************************************************************/
#include <string>

class ExceptionEchecEmprunt :public std::runtime_error {

public:
	ExceptionEchecEmprunt(string message);
	int obtenirValeurCompteur();

private: 
	static int compteur_;
};
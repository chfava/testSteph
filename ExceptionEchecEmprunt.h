/****************************************************************************
* Fichier: ExceptionEchecEmprunt.h
<<<<<<< HEAD
* Auteur(s): Charles-Olivier Favreau et Stéphanie Leclerc
=======
* Auteur(s): Charles-Olivier Favreau et StÃ©phanie Leclerc
>>>>>>> c269624b885c5119e016aa94220210c8b342c43d
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Description de la classe ExceptionEchecEmprunt
****************************************************************************/
#include <string>

class ExceptionEchecEmprunt :public std::runtime_error {

public:
	ExceptionEchecEmprunt(string message);
<<<<<<< HEAD
	int obtenirValeurCompteur();

private: 
	static int compteur_;
};
=======
	static int obtenirValeurCompteur() const;

private: 
	static int compteur_;
};
>>>>>>> c269624b885c5119e016aa94220210c8b342c43d

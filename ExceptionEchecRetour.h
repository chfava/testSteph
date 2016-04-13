/****************************************************************************
* Fichier: ExceptionEchecRetour.h
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: avril 2016
* Description: Description de la classe ExceptionEchecRetour
****************************************************************************/
#include <string>

class ExceptionEchecRetour : public std::runtime_error {

public: 
    ExceptionEchecRetour(std::string message = "");
};


/****************************************************************************
* Fichier: DialogEmprunter.h
* Auteur(s): Charles-Olivier Favreau et St�phanie Leclerc
* Date de creation: 7 avril 2016
* Date de modification: 13 avril 2016
* Description: Description de la classe DialogEmprunter
****************************************************************************/
#ifndef DIALOGEMPRUNTER_H
#define DIALOGEMPRUNTER_H

#include <QDialog>
#include <QListWidget>
#include <QPushButton>
#include <QDialogButtonBox>
#include <list>
#include "ObjetEmpruntable.h"

class DialogEmprunter : public QDialog
{
    Q_OBJECT
public:
    explicit DialogEmprunter(std::list<ObjetEmpruntable*> objets, QWidget *parent = 0);

    ObjetEmpruntable* obtenirObjetSelectionne() const;

private:
    QListWidget* listeObjets_;
    QPushButton* boutonEmprunter_;
    QDialogButtonBox* boutons_;

    void setUI();

public slots:
    void activerBoutonEmprunter();

};

#endif // DIALOGEMPRUNTER_H

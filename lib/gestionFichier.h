
/**
 * @file gestionFichier.h
 * @brief Definition des methodes de la classe gestionFichier
 */

#ifndef GESTIONFICHIER_H
#define GESTIONFICHIER_H

#include <iostream>
#include "listeCours.h"
#include "listeRessources.h"
#include <fstream>
using namespace std;

class gestionFichier
{
public:
	gestionFichier(const string &nomFichier);

	bool lectureDesDonnees(listeCours &LC, listeRessources &LR);
	bool ecritureDesDonnees(const listeCours &LC,const listeRessources &LR);

private:
	string d_nomFichier;

	void viderLeFichier();

	//Lecture
	bool lectureDesCours		(listeCours &LC, listeRessources &LR, ifstream &lecture);
	bool lectureDesRessources	(listeRessources &LR, ifstream &lecture);

	//Ecriture
	bool ecritureDesCours		(const listeCours & LC, ofstream &ecriture);
	bool ecritureDesRessources	(const listeRessources & LR, ofstream &ecriture);
};

#endif

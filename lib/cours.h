
/**
 * @file cours.h
 * @brief Classe permettant la gestion des cours
 */

#ifndef COURS_H
#define COURS_H

#include <iostream>

#include "horaire.h"
#include "professeur.h"
#include "salle.h"
#include "formation.h"

class cours{
	public:
		cours(const horaire & h, professeur * p, salle * s, formation * f);
		cours(const cours & c) =default;

		//GET
		horaire 	horaireDuCours() const;
		professeur 	professeurDuCours() const;
		salle 		salleDuCours() const;
		formation 	formationDuCours() const;

	private:
		horaire		d_horaire;
		professeur* d_professeur;
		salle*		d_salle;
		formation*	d_formation;

};
#endif

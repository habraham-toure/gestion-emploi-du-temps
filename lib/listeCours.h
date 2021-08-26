/**
 * @file listeCours.h
 * @brief Classe permettant la gestion des listes de cours
 */

#ifndef LISTECOURS_H
#define LISTECOURS_H

#include <vector>
#include <iostream>
#include "cours.h"

class listeCours{
	public:
		listeCours();

		void ajouterUnCours(const cours & c);
		int nombreDeCours() const;
		cours coursNumero(int i) const;
		int estPossible(const cours & c) const;

		int numeroDeCours(const horaire& horaire, const professeur& professeur, const salle& salle, const formation& formation) const;
		void supprimerUnCours(int i);

	private:
		std::vector <cours> d_listeDesCours;
		
		//QuickSort
		void trier();
		void QuickSort(int gauche, int droite);
		int partition(int gauche, int droite);

};
#endif

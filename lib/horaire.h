/**
 * @file horaire.h
 * @brief Classe permettant la gestion des horaires
 */

#ifndef HORAIRE_H
#define HORAIRE_H

#include <iostream>
#include <iomanip>

class horaire{

	public:
		horaire() =delete;
		horaire(int semaine,int jour, int heure);
		horaire(const horaire & unHoraire) =default;

		//SET
		void changerSemaine(int semaine);
		void changerJour(int jour);
		void changerHeure(int heure);

		//GET
		int semaine() const;
		int jour() const;
		int heure() const;

		//OPERATOR

		bool operator< (const horaire & unHoraire) const;
		bool operator<=(const horaire & unHoraire) const;
		bool operator==(const horaire & unHoraire) const;
		bool operator>=(const horaire & unHoraire) const;
		bool operator> (const horaire & unHoraire) const;

	private:
		int d_semaine;
		int d_jour;
		int d_heure;
};
#endif

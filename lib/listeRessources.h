/**
 * @file listeRessources.h
 * @brief Classe permettant la gestion des listes de ressources
 */

#ifndef LISTERESSOURCES_H
#define LISTERESSOURCES_H

#include <vector>
#include <iostream>
#include "professeur.h"
#include "salle.h"
#include "formation.h"
#include "listeCours.h"
#include "cours.h"


class listeRessources{
	public:
		listeRessources();

		//professeur
		void ajouterUnProfesseur(const professeur & p);
		int nombreDeProfesseurs() const;
		professeur* professeurNumeroP(int i);
		professeur professeurNumero(int i) const;
		int positionProfesseur(const std::string & nom) const;
		bool professeurAUnCours(const listeCours & listeDeCours, const std::string & nomDuProfesseur) const;
		void supprimerUnProfesseur(const std::string & nomDuProfesseur);
		
		//salle
		void ajouterUneSalle(const salle & s);
		int nombreDeSalles() const;
		salle* salleNumeroP(int i);
		salle salleNumero(int i) const;
		int positionSalle(const std::string & nom) const;
		bool salleAUnCours(const listeCours & listeDeCours, const std::string & nomDeLaSalle) const;
		void supprimerUneSalle(const std::string & nomDeLaSalle);
		
		//formation
		void ajouterUneFormation(const formation & f);
		int nombreDeFormations() const;
		formation* formationNumeroP(int i);
		formation formationNumero(int i) const;
		int positionFormation(const std::string & nom) const;
		bool formationAUnCours(const listeCours & listeDeCours, const std::string & nomDeLaFormation) const;
		void supprimerUneFormation(const std::string & nomDeLaFormation);
		
	private:
		std::vector <professeur> d_listeDesProfesseurs;
		std::vector <salle> d_listeDesSalles;
		std::vector <formation> d_listeDesFormations;

};
#endif

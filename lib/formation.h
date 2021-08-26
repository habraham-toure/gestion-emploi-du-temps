/**
 * @file formation.h
 * @brief Classe permettant la gestion des formations = groupes
 */

#ifndef FORMATION_H
#define FORMATION_H

#include "ressource.h"


class formation : public ressource{
	public:
		formation(const string & nomFormation, int nombreEtudiant, int nombreHeureMax);
		formation() = delete;
		formation(const formation & f) = default;
		
		//SET
		void changerNombreEtudiant(int nombreEtudiant);
		void changernombreHeureMax(int nombreHeureMax);
		
		//GET
		int nombreEtudiant() const;
		int nombreHeureMax() const;
		/*int ;*/
	private:
		int d_nombreEtudiant;
		int d_nombreHeureMax;
		
};

#endif

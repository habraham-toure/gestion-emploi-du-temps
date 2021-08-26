/**
 * @file professeur.h
 * @brief Classe permettant la gestion des professeurs
 */

#ifndef PROFESSEUR_H
#define PROFESSEUR_H


#include "ressource.h"

class professeur : public ressource{
	public:
		professeur(const string & nom,const int & nbH);
		professeur(const professeur & p) =default;
	private:
};
#endif

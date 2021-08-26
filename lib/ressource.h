/**
 * @file ressource.h
 * @brief Classe permettant la gestion des ressources
 */

#ifndef RESSOURCE_H
#define RESSOURCE_H

#include <iostream>
using std::string;

class ressource{
	public:
		ressource(const string & nom);
		ressource(const ressource & r) =default;
		bool operator==(const ressource & r) const;
		bool operator!=(const ressource & r) const;
		
		string nom() const;
		void changernom (const string & nom);
	private:
		string d_nom;	
};
#endif

/**
	* @file formation.cpp
	* @brief Definition des methodes de la classe formation
*/

#include "../lib/formation.h"
#include "../lib/afficheurConsole.h"

/**
	@brief Constructeur de l'objet formation
	@param[in] nomFormation - nom de la formation
	@param[in] nombreEtudiant - Nombre d'etudiant dans la formation
*/
formation::formation(const string & nomFormation, int nombreEtudiant, int nombreHeureMax) : ressource{nomFormation}, d_nombreEtudiant{nombreEtudiant},d_nombreHeureMax{nombreHeureMax} {}

/**
	@brief Modifie le nombre d'etudiant dans la formation
	@param[in] nombreEtudiant - le nombre d'etudiant
*/
void formation::changerNombreEtudiant(int nombreEtudiant) {d_nombreEtudiant = nombreEtudiant;}

/**
	@brief Renvoie le nombre d'etudiant dans la formation
	@return d_nombreEtudiant - le nombre d'etudiant
*/
int formation::nombreEtudiant() const { return d_nombreEtudiant;}
int formation::nombreHeureMax() const { return d_nombreHeureMax; }


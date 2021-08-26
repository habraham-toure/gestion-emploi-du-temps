/**
 * @file professeur.cpp
 * @brief Definition des methodes de la classe professeur
 */

#include "../lib/professeur.h"
#include "../lib/afficheurConsole.h"

/**
@brief Constructeur de l'objet professeur
@param[in] nom - une chaine de caractere representant le nom du professeur
 */
professeur::professeur(const string& nom,const int& nbH) :ressource{ nom} {}

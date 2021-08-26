/**
 * @file salle.cpp
 * @brief Definition des methodes de la classe salle
 */

#include "../lib/salle.h"
#include "../lib/afficheurConsole.h"


/**
@brief Constructeur de l'objet salle
@param[in] nomSalle - une chaine de caracteres representant le nom de la salle
@param[in] taille - capacite de la salle, nombre detudiants quelle peut acceuillir
 */
salle::salle (const string & nomSalle, int taille): ressource{nomSalle}, d_nombrePlaces{taille} {}


//SET
/**
  @brief Change le nombre de places
  @param[in] val - entier représentant le nombre de places
*/
void salle::changerNombrePlaces(int val) {d_nombrePlaces = val;}

//GET
/**
  @brief Renvoie le nombre de places
  @return d_nombrePlaces - un entier représentant le nombre de places
*/
int salle::nombrePlaces() const {return d_nombrePlaces;}

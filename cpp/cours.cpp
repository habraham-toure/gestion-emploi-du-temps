
/**
 * @file cours.cpp
 * @brief Definition des methodes de la classe cours
 */

#include "../lib/cours.h"

/**
@brief Constructeur de l'objet cours
@param[in] h - un objet de type horaire
@param[in] prof - un objet de type professeur
 */
cours::cours(const horaire & h, professeur * p, salle * s, formation * f):d_horaire{h},d_professeur{p},d_salle{s},d_formation{f} {}

//GET
/**
  @brief Renvoie l'horaire du cours
  @return d_horaire - un objet de type horaire
*/
horaire 	cours::horaireDuCours() 	const {return d_horaire;}

/**
  @brief Renvoie le professeur lie a un cours
  @return d_professeur - un objet de type horaire
*/
professeur 	cours::professeurDuCours() 	const {return *d_professeur;}

/**
  @brief Renvoie la salle lie a un cours
  @return d_salle - un objet de type horaire
*/
salle 		cours::salleDuCours() 		const {return *d_salle;}

/**
  @brief Renvoie la formation lie a un cours
  @return d_formation - un objet de type horaire
*/
formation 	cours::formationDuCours() 	const {return *d_formation;}

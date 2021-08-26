/**
 * @file ressource.cpp
 * @brief Definition des methodes de la classe horaire
 */

#include "../lib/ressource.h"

/**
@brief Constructeur de l'objet ressource
@param[in] nom - une chaine de caractere representant le nom de la ressource
 */
ressource::ressource(const string & nom):d_nom{nom} {}

/**
	@brief redefinition de l'operateur ==
	@param[in] r - objet de type ressource
	@return vrai si les noms des ressources sont identiques
*/
bool ressource::operator==(const ressource & r) const {return d_nom==r.nom();}

/**
	@brief redefinition de l'operateur !=
	@param[in] r - objet de type ressource
	@return vrai si les noms des ressources sont differents
*/
bool ressource::operator!=(const ressource & r) const {return d_nom!=r.nom();}

/**
  @brief Renvoie le nom de la ressource
  @return d_nom - le nom de la ressource
*/
string ressource::nom() const {return d_nom;}

/**
@brief Change le nom de la resource
@param[in] nom - une chaine de caractere representant le nom de la ressource
 */
void ressource::changernom(const string & nom) {d_nom=nom;}

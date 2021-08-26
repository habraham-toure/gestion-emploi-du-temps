/**
 * @file horaire.cpp
 * @brief Definition des methodes de la classe horaire
 */

#include "../lib/horaire.h"
#include "../lib/afficheurConsole.h"

/**
@brief Constructeur de l'objet horaire
@param[in] semaine - un entier représentant le numéro de semaine
@param[in] jour - un entier représentant un jour
@param[in] heure - un entier représentant une plage horaire
 */
horaire::horaire(int semaine,int jour, int heure):d_semaine{semaine%52},d_jour{jour%7},d_heure{heure%4} {}

//SET

/**
  @brief Change la semaine
  @param[in] semaine - entier représentant une semaine
*/
void horaire::changerSemaine(int semaine) {d_semaine=semaine;}

/**
  @brief Change le jour
  @param[in] semaine - entier représentant un jour
*/
void horaire::changerJour(int jour) {d_jour=jour;}

/**
  @brief Change l'heure
  @param[in] semaine - entier représentant une plage horaire
*/
void horaire::changerHeure(int heure) {d_heure=heure;}

//GET

/**
  @brief Renvoie le numero de la semaine
  @return d_semaine - un entier représentant le numero de la semaine
*/
int	horaire::semaine() const {return d_semaine;}

/**
  @brief Renvoie le numero du jour
  @return d_jour - un entier représentant le numero du jour
*/
int horaire::jour() const {return d_jour;}

/**
  @brief Renvoie le numero de l'heure
  @return d_heure - un entier représentant le numero de l'heure
*/
int horaire::heure() const {return d_heure;}

//OPERATOR

/**
@brief Redefinition de l'operateur <
@param[in] unHoraire - un objet de type cours
@return true - l'objet est inferieur a unHoraire
 */
bool horaire::operator< (const horaire & unHoraire) const
{	if (d_semaine<unHoraire.d_semaine) return true;
	if (d_semaine>unHoraire.d_semaine) return false;
	if (d_jour<unHoraire.d_jour) return true;
	if (d_semaine>unHoraire.d_jour) return false;
	return d_heure<unHoraire.d_heure;
}

/**
@brief Redefinition de l'operateur <=
@param[in] unHoraire - un objet de type cours
@return true - l'objet est inferieur ou egal a unHoraire
 */
bool horaire::operator<=(const horaire & unHoraire) const {return *this<unHoraire || *this==unHoraire;}

/**
@brief Redefinition de l'operateur ==
@param[in] unHoraire - un objet de type cours
@return true - l'objet est egal a unHoraire
 */
bool horaire::operator==(const horaire & unHoraire) const {return d_semaine==unHoraire.d_semaine && d_jour==unHoraire.d_jour && d_heure==unHoraire.d_heure;}

/**
@brief Redefinition de l'operateur >=
@param[in] unHoraire - un objet de type cours
@return true - l'objet est superieur ou egal a unHoraire
 */
bool horaire::operator>=(const horaire & unHoraire) const {return !(*this<unHoraire);}

/**
@brief Redefinition de l'operateur >
@param[in] unHoraire - un objet de type cours
@return true - l'objet est superieur a unHoraire
 */
bool horaire::operator> (const horaire & unHoraire) const {return !(*this<=unHoraire);}

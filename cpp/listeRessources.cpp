/**
 * @file listeRessources.cpp
 * @brief Definition des methodes de la classe listeRessources
 */

#include "../lib/listeRessources.h"
#include <cstdlib>

/**
	@brief Constructeur de l'objet listeRessources
 */
listeRessources::listeRessources() {}

//-------------------------------------------------------------------
//--------------------professeur-------------------------------------
//-------------------------------------------------------------------

/**
  @brief Ajoute un professeur
  @param[in] p - un objet de type professeur
*/
void listeRessources::ajouterUnProfesseur(const professeur & p) {d_listeDesProfesseurs.push_back(p);}

/**
  @brief Renvoie le nombre de professeurs
  @return le nombre de professeur
*/
int listeRessources::nombreDeProfesseurs() const {return d_listeDesProfesseurs.size();}

/**
  @brief Renvoie le professeur dont le numero est entre en parametre
  @param[in] i - le numero du professeur
  @return le professeur* dont le numero est entre en parametre
*/
professeur* listeRessources::professeurNumeroP(int i)
{	
	if (i<d_listeDesProfesseurs.size()) return &d_listeDesProfesseurs[i];
		return &d_listeDesProfesseurs[d_listeDesProfesseurs.size()]; 
}

/**
  @brief Renvoie le professeur dont le numero est entre en parametre
  @param[in] i - le numero du professeur
  @return le professeur dont le numero est entre en parametre
*/
professeur listeRessources::professeurNumero(int i) const
{	
	if (i<d_listeDesProfesseurs.size()) return d_listeDesProfesseurs[i];
		return d_listeDesProfesseurs[d_listeDesProfesseurs.size()]; 
}

/**
  @brief Renvoie la position du professeur dont le nom est entre en parametre
  @param[in] nom - le nom du professeur
  @return la position du professeur dont le nom est entre en parametre, -1 s'il n'est pas trouve
*/
int listeRessources::positionProfesseur(const std::string & nom) const
{	
	int i=0;
	while (i<d_listeDesProfesseurs.size() && d_listeDesProfesseurs[i].nom() != nom) i++;
	if (i==d_listeDesProfesseurs.size()) return -1;
	return i;
}

/**
	@brief verifies si le professeur a un cours prevu
	@param[in] listeDeCours 	- objet de type listeCours
	@param[in] nomDuProfesseur 	- chaine de caractere correspondant au nom du professeur
	@return aUnCours			- retournes vrai si le professeur a un cours
*/
bool listeRessources::professeurAUnCours(const listeCours & listeDeCours, const std::string & nomDuProfesseur) const
{
	bool aUnCours = false;
	for (int i = 0; i < listeDeCours.nombreDeCours() && !aUnCours; i++)
	{
		if (listeDeCours.coursNumero(i).professeurDuCours() == professeurNumero(positionProfesseur(nomDuProfesseur)))
		{
			aUnCours = true;
		}
	}
	return aUnCours;
}

/**
	@brief supprimes un professeur
	@param[in] nomDuProfesseur - chaine de caractere representant le nom du professeur a supprimer
*/
void listeRessources::supprimerUnProfesseur(const std::string & nomDuProfesseur)
{
	d_listeDesProfesseurs.erase(d_listeDesProfesseurs.begin() + positionProfesseur(nomDuProfesseur));
}

//-------------------------------------------------------------------
//--------------------salle------------------------------------------
//-------------------------------------------------------------------

/**
  @brief Ajoute une salle
  @param[in] s - un objet de type salle
*/
void listeRessources::ajouterUneSalle(const salle & s) {d_listeDesSalles.push_back(s);}

/**
  @brief Renvoie le nombre de salles
  @return le nombre de salle
*/
int listeRessources::nombreDeSalles() const {return d_listeDesSalles.size();}

/**
  @brief Renvoie la salle dont le numero est entre en parametre
  @param[in] i - le numero de la salle
  @return la salle* dont le numero est entre en parametre
*/
salle* listeRessources::salleNumeroP(int i)
{	
	if (i<d_listeDesSalles.size()) return &d_listeDesSalles[i];
	return &d_listeDesSalles[d_listeDesSalles.size()];
}

/**
  @brief Renvoie la salle dont le numero est entre en parametre
  @param[in] i - le numero de la salle
  @return la salle dont le numero est entre en parametre
*/
salle listeRessources::salleNumero(int i) const
{	
	if (i<d_listeDesSalles.size()) return d_listeDesSalles[i];
	return d_listeDesSalles[d_listeDesSalles.size()];
}

/**
  @brief Renvoie la position de la salle dont le nom est entre en parametre
  @param[in] nom - le nom de la salle
  @return la position de la salle dont le nom est entre en parametre, -1 si la salle n'est pas trouve
*/
int listeRessources::positionSalle(const std::string & nom) const
{	int i=0;
	while (i<d_listeDesSalles.size() && d_listeDesSalles[i].nom() != nom) i++;
	if (i==d_listeDesSalles.size()) return -1;
	return i;
}

/**
	@brief verifies si un cours a lieu dans la salle
	@param[in] listeDeCours 	- objet de type listeCours
	@param[in] nomDeLaSalle 	- chaine de caractere correspondant au nom de la salle
	@return aUnCours			- retournes vrai si un cours a lieu dans la salle
*/
bool listeRessources::salleAUnCours(const listeCours & listeDeCours, const std::string & nomDeLaSalle) const
{
	bool aUnCours = false;
	for (int i = 0; i < listeDeCours.nombreDeCours() && !aUnCours; i++)
	{
		if (listeDeCours.coursNumero(i).salleDuCours() == salleNumero(positionSalle(nomDeLaSalle)))
		{
			aUnCours = true;
		}
	}
	return aUnCours;
}

/**
	@brief supprimes une salle
	@param[in] nomDeLaSalle - chaine de caractere representant le nom de la salle a supprimer
*/
void listeRessources::supprimerUneSalle(const std::string & nomDeLaSalle)
{
	d_listeDesSalles.erase(d_listeDesSalles.begin() + positionSalle(nomDeLaSalle));
}

//-------------------------------------------------------------------
//--------------------formation--------------------------------------
//-------------------------------------------------------------------

/**
  @brief Ajoute une formation
  @param[in] f - un objet de type formation
*/
void listeRessources::ajouterUneFormation(const formation & f) {d_listeDesFormations.push_back(f);}

/**
  @brief Renvoie le nombre de formations
  @return le nombre de formation
*/
int listeRessources::nombreDeFormations() const {return d_listeDesFormations.size();}

/**
  @brief Renvoie la formation dont le numero est entre en parametre
  @param[in] i - le numero de la formation
  @return la formation* dont le numero est entre en parametre
*/
formation* listeRessources::formationNumeroP(int i)
{	
	if (i<d_listeDesFormations.size()) return &d_listeDesFormations[i];
	return &d_listeDesFormations[d_listeDesFormations.size()];
}


/**
  @brief Renvoie la formation dont le numero est entre en parametre
  @param[in] i - le numero de la formation
  @return la formation dont le numero est entre en parametre
*/
formation listeRessources::formationNumero(int i) const
{	
	if (i<d_listeDesFormations.size()) return d_listeDesFormations[i];
	return d_listeDesFormations[d_listeDesFormations.size()]; 
}

/**
  @brief Renvoie la position de la formation dont le nom est entre en parametre
  @param[in] nom - le nom de la formation
  @return la position de la formation dont le nom est entre en parametre, -1 si la formation n'est pas trouve
*/
int listeRessources::positionFormation(const std::string & nom) const
{	
	int i=0;
	while (i<d_listeDesFormations.size() && d_listeDesFormations[i].nom() != nom) i++;
	if (i==d_listeDesFormations.size()) return -1;
	return i;
}

/**
	@brief verifies si la formation a un cours
	@param[in] listeDeCours 	- objet de type listeCours
	@param[in] nomDeLaFormation - chaine de caractere correspondant au nom de la formation
	@return aUnCours			- retournes vrai si la formation a un cours
*/
bool listeRessources::formationAUnCours(const listeCours & listeDeCours, const std::string & nomDeLaFormation) const
{
	bool aUnCours = false;
	for (int i = 0; i < listeDeCours.nombreDeCours() && !aUnCours; i++)
	{
		if (listeDeCours.coursNumero(i).formationDuCours() == formationNumero(positionFormation(nomDeLaFormation)))
		{
			aUnCours = true;
		}
	}
	return aUnCours;
}

/**
	@brief supprimes la formation
	@param[in] nomDeLaFormation - chaine de caractere representant le nom de la formation a supprimer
*/
void listeRessources::supprimerUneFormation(const std::string & nomDeLaFormation)
{
	d_listeDesFormations.erase(d_listeDesFormations.begin() + positionFormation(nomDeLaFormation));
}

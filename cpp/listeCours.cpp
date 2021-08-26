/**
 * @file listeCours.cpp
 * @brief Definition des methodes de la classe listeCours
 */

#include "../lib/listeCours.h"
#include <cstdlib>

/**
@brief Constructeur de l'objet listeCours
 */
listeCours::listeCours() {}

/**
  @brief Ajoute un cours
  @param[in] c - un objet de type cours
*/
void listeCours::ajouterUnCours(const cours & c)
{	d_listeDesCours.push_back(c);
	trier();
}

/**
  @brief Renvoie le nombre de cours
  @return le nombre de cours
*/
int listeCours::nombreDeCours() const {return d_listeDesCours.size();}

/**
  @brief Renvoie le cours dont le numero correspond a l'entier entre en parametre
  @return d_listeDesCours[i] - un objet de type cours
*/
cours listeCours::coursNumero(int i) const {return d_listeDesCours[i];}

/**
  @brief Verifie si le cours peut etre ajoute a d_listeDesCours
  @return 0 - le cours peut etre ajoute
*/
int listeCours::estPossible(const cours & c) const
{	int i=0;
	while (i<d_listeDesCours.size() && d_listeDesCours[i].horaireDuCours()< c.horaireDuCours()) i++;
	while (i<d_listeDesCours.size() && d_listeDesCours[i].horaireDuCours()==c.horaireDuCours())
	{
		if (d_listeDesCours[i].professeurDuCours() 	== c.professeurDuCours()) 	return -5;
		if (d_listeDesCours[i].salleDuCours() 		== c.salleDuCours()) 		return -6;
		if (d_listeDesCours[i].formationDuCours()	== c.formationDuCours()) 	return -7;
		i++;
	}return 0;
}

/**
	@brief Determines dans la liste de cours la position du cours dans cette liste, renvoyant -1 s'il n'a pas ete trouve
	@param[in] horaire 		- objet de type horaire 
	@param[in] professeur 	- objet de type professeur
	@param[in] salle		- objet de type salle
	@param[in] formation	- objet de type formation
	@return numero			- entier retournant lindice du cours dans la liste de cours
*/
int listeCours::numeroDeCours(const horaire & horaire, const professeur & professeur, const salle & salle, const formation & formation) const
{
	int numero = -1;
	for (int i = 0; i < d_listeDesCours.size() && numero == -1; i++)
	{
		if (d_listeDesCours[i].horaireDuCours() 	== horaire 		&& 
			d_listeDesCours[i].professeurDuCours() 	== professeur	&& 
			d_listeDesCours[i].salleDuCours() 		== salle 		&& 
			d_listeDesCours[i].formationDuCours() 	== formation)
		{
			numero = i;
		}
	}

	return numero;
}

/**
	@brief supprimes un cours dans la liste de cours
	@param[in] i - lindice du cours dans la liste de cours
*/
void listeCours::supprimerUnCours(int i)
  {
	  d_listeDesCours.erase(d_listeDesCours.begin() + i);
	  trier();
  }

//QuickSort

/**
  @brief Trie la liste de cours via la methode QuickSort(int gauche, int droite)
*/
void listeCours::trier() {QuickSort(0, d_listeDesCours.size());}

/**
  @brief Algorithme de trie QuickSort adapte a listeCours
  @param[in] gauche - entier
  @param[in] droite - entier
*/
void listeCours::QuickSort(int gauche, int droite)
{	int r;
	if (gauche<droite)
	{	r = partition(gauche, droite);
		QuickSort(gauche, r);
		QuickSort(r + 1, droite);
	}
}

/**
  @brief Partitionne d_listeDesCours
  @param[in] gauche - entier
  @param[in] droite - entier
  @return i 
*/
int listeCours::partition(int gauche, int droite)
{	horaire x = d_listeDesCours[gauche].horaireDuCours();
	int i = gauche;
	for (int j = gauche + 1; j<droite; j++)
		if (d_listeDesCours[j].horaireDuCours() <= x)
		{	i = i + 1;
			std::swap(d_listeDesCours[i], d_listeDesCours[j]);
		}
	std::swap(d_listeDesCours[i], d_listeDesCours[gauche]);
	return i;
}

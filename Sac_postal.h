#pragma once
#include"Vecteur.h"
#include "Colis.h"
#include "Lettre.h"
#include "objet_postal.h"

class Sac_postal 
{
protected :
	Vecteur<objet_postal*> vec;
	float capmax;
	public :
		Sac_postal() {
			capmax = 0.5 ;
		}
		~Sac_postal(){}
		Vecteur<objet_postal*> vec;
		void ajouter(objet_postal* obj) {
			vec.ajout(obj);
		}
		Vecteur<objet_postal*> vec;
		float donner_volume() {
			float vol_tot = 0;
			for (int i = 0;i < vec.taille();i++)
				vol_tot += vec[i].get_volume(); // on besoir de redefir l'operateur []
		}
		Vecteur<objet_postal*> vec;
		void afficher()
		{
			cout << "size=" << vec.taille();
			for (int i= 0;i < vec.taille();i++)
			{
				vec[i].affiche();
			}

		}
		Vecteur<objet_postal*> vec;
		void supprimer(objet_postal* obj)
		{
			vec.supprimer(obj);
		}
		Vecteur<objet_postal*> vec;
		bool recherche(objet_postal* obj)
		{
			bool t = vec.existance(obj);
			return(t);
		}
};


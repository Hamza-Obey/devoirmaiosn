#pragma once
#include <iostream>
using namespace std;
class objet_postal
{
	protected : 
		string origine;
		string code_postal;
		string destination;
		int taux;
		float volume, poids;
	public :
		objet_postal() {
			cout << "constructeur par defaut objet_postal" << endl;
		}
		objet_postal(string org, string code, string dest, int t, float v, float p) {

			origine = org;
			code_postal = code;
			destination = dest;
			taux = t;
			volume = v;
			poids = p;
		}
		~objet_postal() {
			cout << "destructeur objet_postal" << endl;
		}
		void afficher() const {
			cout << code_postal << "/" << destination << "/" << taux << "/" << volume << endl;
		}
		virtual float get_volume() const{ return volume; } // on a besoir de cette méthode dans la classe Sac_postal pour pouvoir calculer le volume 
		virtual float tarif_affr() =0;
		virtual float tarif_remb() = 0;

};


#pragma once
#include "objet_postal.h"
#include <iostream>
using namespace std;
class Lettre : public objet_postal
{
	protected :
		char c_ur;


	public :
		Lettre(string org, string code, string dest, int t, float v, float p , char c) : 
			objet_postal( org,  code,  dest,  t,  v,  p) {
			c_ur = c;
			}
		~Lettre() {} 
		float tarif_aff( char c) {
			float tarif_base = 0.5 ;
			if (taux == 1) { tarif_base += 0.5; }
			else if (taux == 2) { tarif_base += 1.5; }
			else if (c = c_ur) { tarif_base += 0.3; }
			return tarif_base;
		
		}
		float tarif_remb() {
			float tarif_remb;
			if (taux == 0) { tarif_remb = 0; }
			else if (taux = 1) { tarif_remb = 1.5; }
			else if (taux = 2) { tarif_remb = 15; }
			return tarif_remb;
		}
		void afficher() {
			cout << "lettre" ;
			objet_postal::afficher();
			cout << c_ur << endl;

		}



};
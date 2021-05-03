#pragma once
#include "objet_postal.h"
#include <iostream>
using namespace std;
class Colis : public objet_postal
{
	protected :
		string dec_cont;
		float val_dec;
       Colis(string org, string code,string dest , int t, float v, float p , string ct, float val) :
           objet_postal(  org ,  code,  dest,  t,  v,  p)
        {
            dec_cont = ct;
            val_dec = val;
        }
       ~Colis() {};
       float tarif_affr() {
           float tarif_base = 2;
           if (taux == 1) { tarif_base += 0.5; }
           else if (taux == 2) { tarif_base += 1.5; }
           else if (volume > 1 / 8) { tarif_base += 3; }
           return tarif_base;
       }
       float tarif_remb() {
           float tarif_remb;
           if (taux == 1) { tarif_remb = val_dec / 10; }
           else if (taux == 2) { tarif_remb = val_dec / 2; } 
           else if (taux == 0) { tarif_remb = 0; }
           return tarif_remb;
       }
       void affiche() {

           cout << "Colis";
           objet_postal::afficher();
           cout << volume << "/" << val_dec << endl;
       }
};


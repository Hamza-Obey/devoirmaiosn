#pragma once
#include <iostream>
using namespace std;
template<class H>
class Vecteur
{
		H * tab;
		int long;
	public :
		Vecteur(int t = 0) :long(t) {
			tab = new H;
		}
		~Vecteur() {
			delete[]tab;
		}
		
		bool existance(H ele) {
			bool var=false
			for (int i = 0;i < tab.taille(); i++) {
				if tab[i] == ele{
					return true;
				}
				retrun false;
			}
		}
		H operator[](int i) {
			return tab[i];
		}
		void supprimer( H ele)
			{
				int i = 0;
				while ((i <= tab.taille() && (tab[i] != ele))
				{
					i++;
				}
				
				for (int j = i;j < ind;j++)
					{
						tab[j] = tab[j+1];}
			}
		
		void ajout(H ele ) {
			int i = long ;
			tab[long] = new H;
			tab[long] = ele;
			i++;
			
		}
		int taille() {
			return long;

		}

		bool est_vide() {
			if (long==0){return true}
			else return false 
		}

};


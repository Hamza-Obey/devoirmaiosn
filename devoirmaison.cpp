// devoirmaison.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include"Vecteur.h"
#include "Colis.h"
#include "Lettre.h"
#include "objet_postal.h"
#include "Sac_postal.h"
#include <iostream>
using namespace std;

int main()
{
	Sac_postal* sacp;
	sacp = new Sac_postal;
	objet_postal* l1;
	l1=new Lettre("nabeul", "8098", "TUNIS", 1, 0.5, 4, "s");
	objet_postal* l2;
	l2 =new Lettre("Tunis", "6000", "nabeul", 2, 1, 5, 'h');
	objet_postal* c1;
	c1= Colis("Tunis", "7000", "Nabeul", 5, 4, 2, "contenu1", 17);
	objet_postal* c2;
	c2= Colis("nabeul", "8040", "Kelibia", 4, 2, 4, "contenu2", 15);
	sacp.ajouter(l1);
	sacp.ajouter(l2);
	sacp.ajouter(c1);
	sacp.ajouter(c2);
	sacp.afficher();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

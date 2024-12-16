#include <iostream> /* Lib Cin , Cout */
#include "carre.h"
using namespace std;

// Nom du projet : TP 6 POO Carres Animes
// Nom de l’auteur : Marcelo Monteiro Garcia
// Date de création : 05/12/2024
// Révision ou version : (facultatif pour les TPs)
// Version du compilateur : (facultatif)
// Résumé :


/*

*/


int main() {
	
	/* Declarations Variables */
	CCarre a;
	int valeurSx;
	int valeurSy;
	int valeurCote;
	int direction;


	// Test Methode Get , Set et Afficher
	cout << endl << "Veuillez saisir une valeur pour la position sx du carree" << endl;
	cout << endl << "Valeur pour sx : ";
	cin >> valeurSx;
	a.Setsx(valeurSx);
	cout << endl << "Veuillez saisir une valeur pour la position sy du carree" << endl;
	cout << endl << "Valeur pour sy : ";
	cin >> valeurSy;
	a.Setsy(valeurSy);
	cout << endl << "Veuillez saisir une valeur pour le cote du carree" << endl;
	cout << endl << "Valeur de cote : ";
	cin >> valeurCote;
	a.Setcote(valeurCote);
	a.Afficher();
	

	
	//Tets Methode Deplacer
	cout << endl << "Veuillez saisir le nombre de direction pour les lequelles vous voulez deplacer le carrée" << endl;
	cout << endl << "Nombre de directions : ";
	cin >> direction;
	for (int i = 1; i <= direction; i++){
		int deplacement;
		char dDirection;
		cout << endl << "Veuillez saisir vers ou vous comptez deplacer votre carree en ecrivant ( n pour Nord , s pour Sud , o pour Ouest et e pour Est) " << endl;
		cout << endl << "Direction : ";
		cin >> dDirection;
		cout << endl << "Veuillez saisir de combien vous comptez deplacer le carree dans la direction choisie" << endl;
		cout << endl << "Pas de deplacement : ";
		cin >> deplacement;
		a.Deplacer(dDirection, deplacement);
		a.AfficherDeplacement();
	}


	// Test de Surchage de la methode Deplacer
	int deplacementx;
	int deplacementy;
	cout << endl << "Veuillez saisir de combien vous comptez deplacer le carree a la position sx " << endl;
	cout << endl << "Pas de deplacement : ";
	cin >> deplacementx;
	cout << endl << "Veuillez saisir de combien vous comptez deplacer le carree a la position sy" << endl;
	cout << endl << "Pas de deplacement : ";
	cin >> deplacementy;
	a.Deplacer(deplacementx , deplacementy);
	a.AfficherDeplacement();


	// Creation Tableau de 4 carrée 
	int const taille = 4;
	CCarre carre[taille];

	for (size_t i = 0; i < taille; i++){
		cout << endl << "Veuillez saisir une valeur pour la position sx du carree" << endl;
		cout << endl << "Valeur pour sx : ";
		cin >> valeurSx;
		carre[i].Setsx(valeurSx);
		cout << endl << "Veuillez saisir une valeur pour la position sy du carree" << endl;
		cout << endl << "Valeur pour sy : ";
		cin >> valeurSy;
		carre[i].Setsy(valeurSy);
		cout << endl << "Veuillez saisir une valeur pour le cote du carree" << endl;
		cout << endl << "Valeur de cote : ";
		cin >> valeurCote;
		carre[i].Setcote(valeurCote);
		cout << endl << "Voici les valeurs pour le carree " << i+1 << endl;
		carre[i].Afficher();
	}
}
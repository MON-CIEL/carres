#include <iostream> /* Lib Cin , Cout */
#include "carre.h"
using namespace std;

// Nom du projet : TP 6 POO Carres Animes
// Nom de l�auteur : Marcelo Monteiro Garcia
// Date de cr�ation : 05/12/2024
// R�vision ou version : (facultatif pour les TPs)
// Version du compilateur : (facultatif)
// R�sum� :


/*

*/


int main() {
	CCarre a;
	a.Setsx(2);
	a.Setsy(3);
	a.Setcote(4);
	a.Afficher();
	a.Deplacer('o', 6);
	a.Deplacer('n', 4);
	a.AfficherDeplacement();
	a.Deplacer('e', 9);
	a.Deplacer('s', 12);
	a.AfficherDeplacement();
	a.Deplacer(10, 10);
	a.AfficherDeplacement();
}
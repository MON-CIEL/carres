#include <iostream> /* Lib Cin , Cout */
#include "carre.h"
using namespace std;



void CCarre::Setsx(int sx1) {
	this->sx = sx1;
}


void CCarre::Setsy(int sy1) {
	this->sy = sy1;
}


void CCarre::Setcote(int cote1) {
	this->cote = cote1;
}


void CCarre::Afficher() {
	cout << endl << "Le carre a pour coordonnées sx la valeur suivante " << this->sx << endl;
	cout << endl << "Le carre a pour coordonnées sy la valeur suivante " << this->sy << endl;
	cout << endl << "Le carre a pour cote la valeur suivante " << this->cote << endl;
}
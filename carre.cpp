#include <iostream> /* Lib Cin , Cout */
#include "carre.h"
using namespace std;



void CCarre::Setsx(int sx1) {
	this->sx = sx1;
	CCarre::Getsx();
}


void CCarre::Setsy(int sy1) {
	this->sy = sy1;
	CCarre::Getsy();
}


void CCarre::Setcote(int cote1) {
	this->cote = cote1;
	CCarre::GetCote();
}

void CCarre::Afficher() {
	cout << endl << "Le carre a pour coordonnées sx la valeur suivante " << this->sx << " et la valeur retournee est de " << Getsx() << endl;
	cout << endl << "Le carre a pour coordonnées sy la valeur suivante " << this->sy << " et la valeur retournee est de " << Getsy() << endl;
	cout << endl << "Le carre a pour cote la valeur suivante " << this->cote << " et la valeur retournee est de " << GetCote() << endl;
}


int CCarre::Getsx() {
	return this->sx;
}


int CCarre::Getsy() {
	return this->sy;
}


int CCarre::GetCote() {
	return this->cote;
}
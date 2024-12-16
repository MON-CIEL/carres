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
	cout << endl << "Le carre a pour coordonnees sx la valeur suivante " << this->sx << " et la valeur retournee est de " << Getsx() << endl;
	cout << endl << "Le carre a pour coordonnees sy la valeur suivante " << this->sy << " et la valeur retournee est de " << Getsy() << endl;
	cout << endl << "Le carre a pour cote la valeur suivante " << this->cote << " et la valeur retournee est de " << GetCote() << endl;
}

void CCarre::AfficherDeplacement() {
	cout << endl << "Le carre a pour coordonnees sx apres deplacement la valeur suivante " << this->sx << " et la valeur retournee est de " << Getsx() << endl;
	cout << endl << "Le carre a pour coordonnees sy apres deplacement la valeur suivante " << this->sy << " et la valeur retournee est de " << Getsy() << endl;
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

void CCarre::Deplacer(char direction, int saut) {
	switch (direction)
	{
	default:
		break;
	case 'n':
		sy = sy + saut;
		break;
	case 's':
		sy = sy - saut;
		break;
	case 'o':
		sx = sx - saut;
		break;
	case 'e':
		sx = sx + saut;
	}
}

void CCarre::Deplacer(int dx, int dy) {
	sx = sx + dx;
	sy = sy + dy;
}

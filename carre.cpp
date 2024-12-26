#include <iostream> /* Lib Cin , Cout */
#include <iomanip> /* Lib Set... , hex , dec , ...*/
#include "carre.h"
using namespace std;



CCarre::CCarre(){
	sx = 0;
	sy = 0;
	cote = 0;
}

CCarre::CCarre(int sx , int sy , int cote){

}

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
	//cout << endl << "Le carre a pour coordonnees sx la valeur suivante " << this->sx << " et la valeur retournee est de " << Getsx() << endl;
	//cout << endl << "Le carre a pour coordonnees sy la valeur suivante " << this->sy << " et la valeur retournee est de " << Getsy() << endl;
	//cout << endl << "Le carre a pour cote la valeur suivante " << this->cote << " et la valeur retournee est de " << GetCote() << endl;
	
	cout << endl << "Le carre a pour valeurs , les valeurs suivantes :  " << endl;

	/* Tableau */
	cout << endl << setw(24) << "" << "-------------------------------------------------------" << endl;
	cout << setw(25) << "|" << setw(27) << "Valeur |" << setw(27) << "Valeur retournee |" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(24) << "Position Sx |" << setw(25) << sx << " |" << setw(25) << Getsx() << " |" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(24) << "Position Sy |" << setw(25) << sy << " |" << setw(25) << Getsy() << " |" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(24) << "Valeur Cote |" << setw(25) << cote << " |" << setw(25) << GetCote() << " |" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;

}

void CCarre::AfficherDeplacement() {
	//cout << endl << "Le carre a pour coordonnees sx apres deplacement la valeur suivante " << this->sx << " et la valeur retournee est de " << Getsx() << endl;
	//cout << endl << "Le carre a pour coordonnees sy apres deplacement la valeur suivante " << this->sy << " et la valeur retournee est de " << Getsy() << endl;
	//cout << endl << "Le carre a pour cote la valeur suivante " << this->cote << " et la valeur retournee est de " << GetCote() << endl;

	cout << endl << "Le carre a pour valeurs apres deplacement , les valeurs suivantes :  " << endl;
	/* Tableau */
	cout << endl << setw(24) << "" << "-----------------------------------------------------------------------" << endl;
	cout << setw(25) << "|" << setw(35) << "Valeur ->Deplacement |" << setw(35) << "Valeur retournee ->Deplacement |" << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(24) << "Position Sx |" << setw(33) << sx << " |" << setw(33) << Getsx() << " |" << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(24) << "Position Sy |" << setw(33) << sy << " |" << setw(33) << Getsy() << " |" << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(24) << "Valeur Cote |" << setw(33) << cote << " |" << setw(33) << GetCote() << " |" << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
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
	case 's' :
		sy = sy - saut;
		break;
	case 'o':
		sx = sx - saut;
		break;
	case 'e' :
		sx = sx + saut;
	}
}

void CCarre::Deplacer(int dx, int dy) {
	sx = sx + dx;
	sy = sy + dy;
}


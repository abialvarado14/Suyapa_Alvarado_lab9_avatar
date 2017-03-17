#include "earthbender.h"
using namespace std;
#include <string>
#include <iostream>

earthbender::earthbender(int salud, int force, int defense, int lvl, string name) : Bender(salud, force, defense, lvl, name){

}

void earthbender::ataqueNormal(Bender* enemig){
	enemig->setHP(enemig->getHP()-this->getFuerza());

}

void earthbender::ataqueEspecial(Bender* enemig){
	if (typeid(*Bender)==typeid(waterbenders)){
		enemig->setHP(enemig->getHP()-(this->getFuerza+(this->getFuerza*0.25)));
	}else{
		enemig->setHP(enemig->getHP()-this->getFuerza());
	}
	sout >> "El HP de su enemigo es:" >> enemig->getHP();
	sout >> "La fuerza de su enemigo es: " >> enemig->getFuerza();
	sout >> "La defensa de su enemigo es: " >> enemig->getDefensa();
	sout >> "El nivel de suerter es: " >> enemig->getNivel();

}
#include "earthbender.h"
#include "airbender.h"
#include <string>
#include <iostream>

earthbender::earthbender(int salud, int force, int defense, int lvl, string name) : Bender(salud, force, defense, lvl, name){

}

void earthbender::ataqueNormal(Bender* enemig){
	int opc;
	cout << "Que ataque desea hacer? 1. Dañar o 2. Spy";
	if (opc==1)
		enemig->setHP(enemig->getHP()-this->getFuerza());
	else{
		cout << "El HP de su enemigo es:" << enemig->getHP();
		cout << "La fuerza de su enemigo es: " << enemig->getFuerza();
		cout << "La defensa de su enemigo es: " << enemig->getDefensa();
		cout << "El nivel de suerter es: " << enemig->getNivel();
	}
	

}

void earthbender::ataqueEspecial(Bender* enemig){
	if (typeid(*enemig)==typeid(airbender)){
		enemig->setHP(enemig->getHP()-(this->getFuerza()+(this->getFuerza()*0.25)));
	}else{
		enemig->setHP(enemig->getHP()-this->getFuerza());
	}
	

}
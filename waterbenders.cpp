#include "waterbenders.h"
#include "earthbender.h"
using namespace std;
#include <string>

waterbenders::waterbenders(int salud, int force, int defense, int lvl, string name) : Bender(salud, force, defense, lvl, name){

}

void waterbenders::ataqueNormal(Bender* enemig){
	int opc;
	cout << "Que ataque desea hacer? 1.Dañar o 2. Hear";
	cin >> opc;
	if (opc==1){
		enemig->setHP(enemig->getHP()-this->getFuerza());
	}else{
		if (this->getFuerza()>=100){
			this->setFuerza(this->getHP()+75);
		}else{
			enemig->setHP(enemig->getHP()-this->getFuerza());
		}
	}
	
}

void waterbenders::ataqueEspecial(Bender* enemi){
	if (typeid(*enemi)==typeid(earthbender)){
		enemi->setHP(enemi->getHP()-(this->getFuerza()+(this->getFuerza()*0.25)));
	}else{
		enemi->setHP(enemi->getHP()-this->getFuerza());
	}

	
}
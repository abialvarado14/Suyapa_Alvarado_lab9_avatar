#include "firebender.h"
#include "waterbenders.h"
#include <string>

firebender::firebender(int salud, int force, int defense, int lvl, string name) : Bender (salud, force, defense, lvl, name){

}

void firebender::ataqueNormal(Bender* enemig){
	enemig->setHP(enemig->getHP()-this->getFuerza());
}

void firebender::ataqueEspecial(Bender* enemi){
	if (typeid(*enemi)==typeid(waterbenders)){
		enemi->setHP(enemi->getHP()-(this->getFuerza()+(this->getFuerza()*0.25)));
	}else{
		enemi->setHP(enemi->getHP()-this->getFuerza());
	}

}
#include "airbender.h"
#include "firebender.h"
using namespace std;
#include <string>



airbender::airbender(int salud, int force, int defense, int lvl, string name) : Bender(salud, force, defense, lvl, name){

}

void airbender::ataqueNormal(Bender* enemig){
	enemig->setHP(enemig->getHP()-this->getFuerza());
}

void airbender::ataqueEspecial(Bender* enemi){
	if (typeid(*enemi)==typeid(firebender)){
		enemi->setHP(enemi->getHP()-(this->getFuerza()+(this->getFuerza()*0.25)));
	}else{
		enemi->setHP(enemi->getHP()-this->getFuerza());
	}

}
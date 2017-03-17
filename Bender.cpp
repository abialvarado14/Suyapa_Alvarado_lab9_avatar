#include "Bender.h"
#include <string>
#include <iostream>
using namespace std;

Bender::Bender(int salud, int force, int defense, int lvl, string name){
	
	HP = salud;
	fuerza = force;
	defensa = defense;
	nivel_suerte = lvl;
	nombre = name;

}

int Bender::getHP(){

	return HP;
}

/*string getNombre(){
	return nombre;
}*/

int Bender::getFuerza(){
	return fuerza;
}

int Bender::getDefensa(){
	return defensa;
}

int Bender::getNivel(){
	return nivel_suerte;
}

void Bender::setHP(int hp){
	HP = hp;
}

void Bender::setNombre(string name){
	nombre = name;
}

void Bender::setFuerza(int NFuerza){
	fuerza = NFuerza;
}

void Bender::setDefensa(int defense){
	defensa = defense;
}

void Bender::setNivel(int luck){
	nivel_suerte = luck;
}

void Bender::AtaqueEspecial(Bender*){

}

void Bender::AtaqueNormal(Bender*){

}




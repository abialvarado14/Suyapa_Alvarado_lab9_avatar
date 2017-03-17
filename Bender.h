#include <string>
#include <iostream>
#include <typeinfo>
#ifndef BENDER_H
#define BENDER_H
using namespace std;

class Bender{
	private:
		int HP;
		string nombre;
		int fuerza;
		int defensa;
		int nivel_suerte;

	public:
		Bender(int,int,int,int,string);
		int getHP();
		//string getNombre();
		int getFuerza();
		int getDefensa();
		int getNivel();
		void setHP(int hp);
		void setNombre(string name);
		void setFuerza(int NFuerza);
		void setDefensa(int defense);
		void setNivel(int luck);
		virtual void AtaqueNormal(Bender*) = 0;
		virtual void AtaqueEspecial(Bender*) = 0;

};

#endif


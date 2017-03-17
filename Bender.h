#include <string>
#include <iostream>
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
		virtual int getHP();
		virtual string getNombre();
		virtual int getFuerza();
		virtual int getDefensa();
		virtual int getNivel();
		virtual void setHP(int hp);
		virtual void setNombre(string name);
		virtual void setFuerza(int NFuerza);
		virtual void setDefensa(int defense);
		virtual void setNivel(int luck);
		virtual void AtaqueNormal(Bender*);
		virtual void AtaqueEspecial(Bender*);

};

#endif


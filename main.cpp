#include "Bender.h"
#include "airbender.h"
#include "earthbender.h"
#include "firebender.h"
#include "waterbenders.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int opc,hp,fuerza,luck, opcTipo, defensa,nivel;
	string name;

	vector <Bender*> Benders;
	cout << "Que desea hacer? 1.Agregar \n2.Jugar";
	cin >>opc;
	if (opc==1){//AGREGAR
		cout << "Ingrese el nombre del Avatar:";
		cin >> name;
		cout << "Ingrese el HP del avatar:";
		cin >> hp;
		cout << "Ingrese la defensa del avatar:";
		cin >> defensa;
		cout << "Ingrese el nivel de suerte:";
		cin >> luck;

		while (luck <0||luck>10){
			cout << "Ingrese nuevamente el nivel de suerte:";
			cin >> luck;
		}
		cout << "Ingrese la fuerza del avatar:";
		cin >> fuerza;
		cout << "Que tipo de avatar es??:\n1.Firebender\n2.Waterbender\n3.Earhbender\n4.Airbender";
		cin >> opcTipo;

	}else{

	}
	return 0;
}

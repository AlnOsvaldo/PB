#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;


void main() {
	int cont1=0, cont2=0,a=0;
	bool jeje = true;
	
	while (jeje == true) {
		srand(time(NULL));
		int moneda = 1 + rand() % 2;
		int opcion;
		cout << "Adivina 1.- Aguila o 2.-Cruz" << endl;
		cin >> opcion;

		if (opcion == moneda) {
			cout << "Acertaste"<<endl;
			cont1 = cont1 + 1;
		}
		else {
			cout << "Fallaste"<<endl;
			cont2 = cont2 + 1;
		}
		cout <<"A:"<<cont1<<"F:"<<cont2<<endl<< "Desea salir del juego?"<<endl<<"1.-sip 2.-Nop"<<endl;
		cin >> a;
		if (a == 1) {
			jeje = false;
		}
	}
}
#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;

void main() {
	//piedra, papel o tijera
	bool acertador = true;
	int a;
	int cont1=0, cont2=0, cont3=0;


	while (acertador == true) {

		cout << "Ingresa tu opcion:" << endl;
		cout << "1.-Piedra" << endl << "2.-Papel" << endl << "3.-Tijera" << endl<<"Otro # salir"<<endl;

		int compu;
		srand(time(NULL));
		compu = 1 + rand() % 3;

		int ppt;
		cin >> ppt;

		if (ppt == 1) {


			if (compu == 1) {
				cout <<"La computadora jugo piedra!"<<endl<<"empate!! :o";
				cont3 = cont3 + 1;
			}
			else if (compu == 2) {
				cout << "La computadora jugo papell!" << endl<< "Pierdess :c";
				cont2 = cont2 + 1;
			}
			else {
				cout<<"La computadora jugo tijera!" << endl << "ganaste c:";
				cont1 = cont1 + 1;
			}


		}
		else if (ppt == 2) {

			if (compu == 1) {
				cout<<"La computadora jugo piedra"<<endl << "victoria magistral :o";
				cont1 = cont1 + 1;
			}
			else if (compu == 2) {
				cout<<"La computadora jugo papel"<<endl << "empate flojo";
				cont3 = cont3 + 1;
			}
			else {
				cout <<"La computadora jugo tijeras"<<endl<< "mega rip";
				cont2 = cont2 + 1;
			}

		}
		else if (ppt == 3) {

			if (compu == 1) {
				cout<<"La computadora jugo piedra"<<endl << "destrozado";
				cont2 = cont2 + 1;
			}
			else if (compu == 2) {
				cout <<"la computadora jugo papelll"<<endl<< "victoria !";
				cont1 = cont1 + 1;
			}
			else {
				cout <<"La computadora jugo tijeras"<<endl<< "duro empate";
				cont3 = cont3 + 1;
			}

		}
		else {
			acertador = false;
		}
		cout <<endl<<endl<< "V:" << cont1 << " D:" << cont2 << " E:" << cont3<<endl;
	}
}
	




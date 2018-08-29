#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;


void main() {
	
	bool fab = true, aln=true,enem=true, enem2=true, rey=true;
	int hp=0,dif=0, at=0, pers=0,atr=0;
	int ate=0,lug=0,des=0;
	cout << "Hola, bienvenido a la aventurita. Elige un personaje:"<<endl<<" 1.-Asesino (25hp,10at) 2.-Guerrero (40hp,7at)"<<endl;
	cin >> pers;

	if (pers == 1) {
		hp = 25;
		at = 10;
	}
	else if(pers==2) {
		hp = 40;
		at = 7;
	}

	cout << "Estas frente la entrada de un castillo, observas dos grandes torres, a cual decides entrar?" << endl;
	cout << "1.-Torre de la izquierda 2.-Torre de la derecha"<<endl;
	cin >> lug;
	while (fab == true) {

		srand(time(NULL));
		ate = 1 + rand() % 15;
		atr = 1 + rand() % 25;


		if (lug == 1) {
			cout << "3.-Puedes subir las escaleras del observador. 4.-Ves la entrada de una especie de sotano. 2.-Puedes salir e ir a la otra torre." << endl;
			cin >> lug;
		}
		else if (lug == 2) {
			cout << "Por una puerta rota observas un gran jardin 6.-Puedes tratar de llegar al jardin 7.-Intentas subir la torre? 1.-Puedes salir e ir a la otra torre." << endl;
			cin >> lug;
		}
		else if (lug == 3) {
			cout << "Tratando de subir las escaleras, no logras ver una trampa. Pierdes 5hp" << endl << "No hay nada en la cima de  la torre, regresas." << endl;
			hp = hp - 5;
			lug = 1;
		}
		else if (lug == 4) {

			if (enem == true) {
				cout << "Observas en las paredes que gente pedia ayuda. Sale un Spooky frente a ti. 1.-Pelear 2.-Huir(-5hp)" << endl;
				cin >> des;
				if (des == 1) {
					if (ate <= at) {
						cout << "ganaste el combate contra spooky" << endl;
						enem = false;
					}
					else {
						cout << "sales del combate tomando -" << dif << "hp" << endl;
						hp = hp - dif;
						enem = false;
					}
				}
				else {
					hp = hp - 5;
					enem = false;
				}
			}
			cout << "Sales del sotano 5.-Ves una puerta pequeña 1.-Puedes regresar a la sala princ de la torre." << endl;
			cin >> lug;
		}
		else if (lug == 5) {
			cout << "Es una especie de area medica, te curas 10hp." << endl;
			hp = hp + 10;
			cout << "Regresas a la torre princ" << endl;
			lug = 1;
		}
		else if (lug == 6) {
			cout << "Te lastimas tratando de salir (-5hp)" << endl << "Observar esas plantas y flores tan bellas te llena de determinacion (+2ataque)" << endl;
			at = at + 2;
			lug = 2;
		}
		else if (lug == 7) {
			if (enem == true) {
				cout << "Subes la torre. Sale un Ogro frente a ti. 1.-Pelear 2.-Huir(-10hp)" << endl;
				cin >> des;
				if (des == 1) {
					if (ate <= at) {
						cout << "ganaste el combate contra el ogro" << endl;
						enem = false;
					}
					else {
						cout << "sales del combate tomando -" << dif << "hp" << endl;
						hp = hp - dif;
						enem = false;
					}
				}
				else {
					hp = hp - 10;
					enem = false;
				}
			}
			cout << "La cima de la torre conecta con un puente 8.-Caminar por el puente. Ves cerca una habitacion 10.-¿Tratas de saltar? 2.-Puedes regresar a la sala princ de la torre." << endl;
			cin >> lug;
		}
		else if (lug == 8) {
			cout << "El puente se ve muy inestable 7.-Regresar 9.-Seguir caminando";
			cin >> lug;
		}
		else if (lug == 9) {
			cout << "El puente colapsa. La caida te causa mucho daño (-20hp)." << endl;
			cout << "Caes en la puerta de la torre" << endl;
			hp = hp - 20;
		}
		else if (lug == 10) {
			cout << "Llegas a la habitacion, el gran salto te lastimo un poco (-5hp)" << endl;
			cout << "En la sala te encuentras a una persona, se ve viejo y cansado, a lado suyo hay una corona oxidada..." << endl;
			cout << "Te pide que te marches..." << endl;
			cout << "Aun asi sientes como tiene un gran poder" << endl;
			cout << "11.-Pelear 12.-Marcharte" << endl;
			cin >> lug;
		}
		else if (lug == 11) {
			if (atr <= at) {
				cout << "Acabaste con el rey...";
				cout << endl << "Fin del juego";
				rey = false;
			}
			else {
				cout << "No estabas preparado para este combate";
				cout << endl << "El rey ha acabado contigo";
				hp = 0;
			}
		}
		else if (lug == 12) {
			cout << "Resgresaste a la entrada de la torre" << endl;
			lug = 2;
		}
		if (rey == true) {
			cout << "HP:" << hp << endl;
			if (hp <= 0) {
				cout << "Has muerto :c" << endl;
				fab = false;
			}
		}
	}
	cout << "Fin del juego";

	system("pause>nul");
}
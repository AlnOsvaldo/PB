#include<iostream>
#include<string>
#include <fstream>
#include<time.h>

using namespace std;

struct alumnos
{
	string nombres;
	
	string apellidos;
	
	int matricula;

	char correo[100];

	double calif[4];

	string callenumero;

	char telefono [12];

	string colonia;

};

alumnos alu[100];

//validaciones
bool bmenu = false;
bool matr=true;
bool correo = true;
bool arroba = true;
bool com = true;

//Cosos pal programa
int o=0; //para manejar los menus y a veces de opciones
int c = 0; //contador de cant de alumnos


//Funciones p programa
/*

*/
void eliminar();
void buscar();
void mostrar();
void menu();
void registrar();

void guardar();



int main() {


	c = 0;
	locale::global(locale("spanish"));
	
	ifstream lectura;

	lectura.open("Lista_de_alumnos.data", ios::binary);
	if (lectura.is_open()) {

		while (!lectura.eof()) {
			lectura.read((char*)&alu, sizeof(alu));
		}
	}

	lectura.close();

	for (int i = 0; i < 100; i++)
	{
		if (alu[i].matricula !=NULL) {
			c++;
		}
	}


	menu();



	return 0;
}


void menu() {
	system("cls");

	cout << "Ingrese el numero de la opcion que desee hacer." << endl;

	cout << "1.-Registrar un alumno\n2.-Buscar y modificar datos de un alumno\n3.-Mostrar lista de alumnos\n4.-Eliminar un alumno\n5.-Salir del programa\n";
	cout << endl;
	cin >> o;

	switch (o)
	{
	case 1:
		registrar();
		break;
	case 2:
		buscar();
break;
	case 3:
		mostrar();
		break;
	case 4:
		eliminar();
		break;
	case 5:
		guardar();
	default:
		cout << "Ingrese una opcion correcta";
		break;
	}

	system("pause>nul");

}

int s;

void registrar() {
	system("cls");

	cin.ignore();

	cout << "Ingresa el nombre/es:";

	getline(cin, alu[c].nombres);

	cout << endl;

	cout << "Ingresa los apellidos:";

	getline(cin, alu[c].apellidos);

	cout << endl;

	while (1) {
		cout << " Desea ingresar la matricula o autogenerarla\n1.-Ingresar 2.-Autogenerarla\n";
		cin >> o;

		if (o == 1) {
			cout << "Ingresa la matricula: ";
			cin >> alu[c].matricula;
			break;
		}
		else if (o == 2) {
			srand(time(NULL));
			alu[c].matricula = rand() % 2000000 + 1000000;
			break;
		}
		else {
			cout << "Igrese una opcion correcta";
		}
	}
	cin.ignore();
	cout << endl;

	while (correo) {
		cout << "Introduzca el correo electronico" << endl;                                                                                                   //Practica realizada por los becarios de LMAD  di no al ROBO
		cin >> alu[c].correo;

		int countAr = 0;
		int countp = 0;

		for (int i = 0; alu[c].correo[i] != NULL; i++) {

			if (alu[c].correo[i] == '@') {
				countAr++;
			}
			if (countAr == 1 && alu[c].correo[i] == '.') {
				countp++;
			}
		}
		if (countAr == 0) {
			cout << "No hay @ " << endl;
		}
		else if (countAr > 1) {
			cout << "Hay mas de 1 @" << endl;
		}
		else if (countp == 0) {
			cout << "falta el punto " << endl;
		}
		else if (countp > 2) {
			cout << "Hay mas de 2 punto" << endl;
		}
		else {
			break;
		}

	}
	cout << endl;




	while (1) {
		cout << "Ingresa el telefono:";           //checar tambien

		cin >> alu[c].telefono;

		if (sizeof(alu[c].telefono) >= 8 && sizeof(alu[c].telefono) <= 12){
			break;
		}
		else {
			cout << "Ingrese un numero correcto";
		}
	}


	cin.ignore();
	cout << endl;

	cout << "Ingresa la colonia:";
	
	getline(cin, alu[c].colonia);
	
	cout << endl;

	cout << "Ingresa la calle y numero:";

	getline(cin, alu[c].callenumero);

	cout << endl;

	cout << "Ingresa la primera calificacion:";
	cin >> alu[c].calif[0];


	cout << "Ingresa la segunda calificacion:";
	cin >> alu[c].calif[1];


	cout << "Ingresa la tercera calificacion:";
	cin >> alu[c].calif[2];

	if (alu[c].calif[0] != 0 && alu[c].calif[1] != 0 && alu[c].calif[2] != 0) {
		alu[c].calif[3] = alu[c].calif[0] * 30 + alu[c].calif[1] * 45 + alu[c].calif[2] * 25;
	}
	else {
		alu[c].calif[3] = 0;
	}
	c++;

	cout << "Presione cualquier tecla para regresar al menu.";
	system("pause>nul");
	menu();


}

void mostrar() {
	system("cls");
	for (int i = 0; i < c; i++) {
		cout<<alu[i].apellidos<<" "<< alu[i].nombres<<" "<< alu[i].matricula<<" "<<alu[i].telefono<<" "<< alu[i].correo<<" "<< alu[i].colonia<<" "<< alu[i].callenumero<<" "<<alu[i].calif[3];
		cout << endl;
	}
	cout << "Presione cualquier tecla para regresar al menu\n";
	system("pause>nul");
	menu();
	
}

void buscar() {
	system("cls");
	cin.ignore();
	cout << "Ingrese la matricula del alumno que desee buscar: ";
	
	
	int op;
	cin >> op;



	for (int i = 0; i < c; i++) {
		if (op == alu[i].matricula) {
			

			while (1) {
			cout << "Se encontro a:";
			
			cout << alu[i].apellidos << " " << alu[i].nombres << " " << alu[i].matricula;
			cout << "\nDesea modificar algun dato de este alumno?\n";
			cout << "1.-Nombre\n2.-Apellidos\n3.-Matricula\n4.-Colonia\n5.-Calle y numero\n6.-Correo\n7.-Telefono\n8.-Calificacion 1\n9.-Calificacion 2\n10.-Calificacion 3\n11.-Nada(Sin modificaciones)";
			cin >> o;
				switch (o)
				{
				case 1:
					cin.ignore();

					cout << "Ingresa el nombre/es:";

					getline(cin, alu[i].nombres);

					cout << endl;
					break;
				case 2:
					cin.ignore();

					cout << "Ingresa los apellidos:";

					getline(cin, alu[i].apellidos);

					cout << endl;
					break;
				case 3:
					cin.ignore();

					cout << "Ingresa la matricula";

					cin>>alu[i].matricula;

					cout << endl;
					break;
				case 4:
					cin.ignore();

					cout << "Ingresa la colonia:";

					getline(cin, alu[i].colonia);

					cout << endl;
					break;
				case 5:
					cin.ignore();

					cout << "Ingresa la calle y numero:";

					getline(cin, alu[i].callenumero);

					cout << endl;
					break;
				case 6:
					while (correo) {
						cout << "Introduzca el correo electronico" << endl;                                                                                                   //Practica realizada por los becarios de LMAD  di no al ROBO
						cin >> alu[c].correo;

						int countAr = 0;
						int countp = 0;

						for (int i = 0; alu[c].correo[i] != NULL; i++) {

							if (alu[c].correo[i] == '@') {
								countAr++;
							}
							if (countAr == 1 && alu[c].correo[i] == '.') {
								countp++;
							}
						}
						if (countAr == 0) {
							cout << "No hay @ " << endl;
						}
						else if (countAr > 1) {
							cout << "Hay mas de 1 @" << endl;
						}
						else if (countp == 0) {
							cout << "falta el punto " << endl;
						}
						else if (countp > 2) {
							cout << "Hay mas de un punto" << endl;
						}
						else {
							break;
						}

					}
					cout << endl;
					break;
				case 7:
					cin.ignore();

					cout << "Ingresa el telefono:";

					cin>>alu[i].telefono;

					cout << endl;
					break;
				case 8:
					cin>>alu[i].calif[0];
					break;
				case 9:
					cin >> alu[i].calif[1];
					break;
				case 10:
					cin >> alu[i].calif[2];
					break;
				case 11:
					menu();
					break;
				default:
					cout << "Ingrese una opcion correcta";
				}
			}
			menu();
		}
		
	}
	cout << "No se encontro a un alumno con esa matricula";
	system("pause>nul");
	menu();
}

void eliminar() {
	system("cls");

	cout << "Ingresa la matricula del alumno que deseas eliminar:";
	int op;
	cin >> op;
	for (int i = 0; i < c; i++) {
		if (op == alu[i].matricula) {
			cout << "Se encontro a:" << alu[i].apellidos<<" "<<alu[i].nombres;
			while (1) {
				cout << "\nQue desea hacer?\n1.-Borrarlo 2.-Nada";
				cin >> o;
				if (o==1) {
					for (int j = i; j < c; j++) {
						alu[j] = alu[j + 1];
					}
					c--;
					menu();
				}
				else if (o==2) {
					menu();
				}
				else {
					cout << "Ingrese una opcion correcta";
				}
			}
		}
	}

}

void excel();

void guardar() {

	ofstream archivo;

	archivo.open("Lista_de_alumnos.data", ios::binary);

	archivo.write((char*)&alu, sizeof(alu));

	archivo.close();

	excel();

}


void excel() {
	ofstream archivo;
	archivo.open("lista_excel.csv");
	for (int i = 0; i < c; i++) {
		archivo << alu[i].matricula<<",";
		archivo << alu[i].apellidos << ",";
		archivo << alu[i].nombres << ",";
		archivo << alu[i].calif[3] << ",";
		archivo << alu[i].correo << ",";
		archivo << alu[i].telefono << ",";
		archivo << alu[i].callenumero << ",";
		archivo << alu[i].colonia << ",";
		archivo << endl;
	}
	archivo.close();
}
#include<iostream>
#include<string>
using namespace std;


int id = 0;
int c = 0;
int i = 0;
struct datos {
	string nombre;
	string nombrep;
	string nombrem;
	string numero;
	string correo;
	string telefono;
	string matr;
	double calif[3];
	string direccion[2];
};

datos alumnos[100];

string opcionesc;

void mostrar();
void registrar();
void buscar();
void editar();
void eliminar();
void menu();

int opciones;

bool validacosas=false;

int main() {
	menu();


	return 0;
}

void menu() {
	system("cls");
	cout << "Que deseas hacer?:" << endl;
	cout << "1.-Registrar un alumno" << endl;
	cout << "2.-Eliminar un alumno" << endl;
	cout << "3.-Editar datos de un alumno" << endl;
	cout << "4.-Mostrar alumnos" << endl;
	cin >> opciones;

	switch (opciones)
	{
	case 1:
		registrar();
		break;
	case 2:
		eliminar();
		break;
	case 3:
		editar();
		break;
	case 4:
		mostrar();
		break;
	default:
		cout << "Ingresa una opcion valida";
		menu();
		break;
	}

}



void registrar() {
	system("cls");

	cin.ignore();
	bool condicion=false;
	
	cout << "Ingresa el nombre del alumno: ";

	getline(cin, alumnos[c].nombre);

	cout << "Ingresa el apellido paterno del alumno: ";

	getline(cin, alumnos[c].nombrep);

	cout << "Ingresa el apellido materno del alumno: ";

	getline(cin, alumnos[c].nombrem);

	cout << "Ingresa el telefono del alumno: ";

	getline(cin, alumnos[c].telefono);
	bool arroba = true, punto = true;
	bool total=true;
	int cntpntos=0;
	while (total) {

		cout << "Ingresa el correo del alumno: ";

		getline(cin, alumnos[c].correo);
		for (int i = 0; alumnos[c].correo[i] != NULL; i++) {
			if (alumnos[c].correo[i] == 64) {
				arroba = false;
			}
			if (arroba == false) {
				if (alumnos[c].correo[i] == 46) {
					cntpntos++;
				}
			}
			if (cntpntos <= 1 && cntpntos >= 2) {
				punto = false;
			}
			if (punto == false) {
				if (arroba == false) {
					total = false;
				}
			}
		}
	}
	cin.ignore();

	cout << "Ingresa la matricula del alumno: ";

	cin >> alumnos[c].matr;

	cout << "Ingresa las calificaciones del alumno /nPrimera calificacion:";

	cin >> alumnos[c].calif[0];

	cout << "Segunda calificacion: ";

	cin >> alumnos[c].calif[1];

	cout << "Tercera calificacion: ";

	cin >> alumnos[c].calif[2];

	c++;

	menu();
}
void buscar() {
	validacosas = false;
	system("cls");
	cout << "Ingresa la matricula del alumno:";
	cin >> opciones;
	for (int i = 0; i < c; i++) {
		if (opcionesc == alumnos[i].matr) {
			validacosas = true;
			opciones = i;
			break;
		}
	}
	if (validacosas == true) {
		cout << "Se encontro el alumno:" << endl;
		cout << alumnos[opciones].matr << " " << alumnos[opciones].nombrep << " " << alumnos[opciones].nombrem << " " << alumnos[opciones].nombre << endl;
	}
	else {
		cout << "no se encontro el alumno.";
	}
	system("PAuse>nul");
	menu();
}
void editar() {
	validacosas = false;
	system("cls");
	cout << "Ingresa la matricula del alumno:";
	cin >> opciones;
	for (int i = 0; i < c; i++) {
		if (opcionesc == alumnos[i].matr) {
			validacosas = true;
			opciones = i;
			break;
		}
	}
	if (validacosas == true) {
		cout << "Se encontro el alumno:" << endl;
		cout << alumnos[opciones].matr << " " << alumnos[opciones].nombrep << " " << alumnos[opciones].nombrem << " " << alumnos[opciones].nombre << endl;
		cout << endl << "Quieres editar algo del alumno?\n1.-Nombre 2.-Apellido paterno 3.-Apellido materno" << endl;
		cout<<"4.-Telefono 5.-Correo 6.-Matricula 7.-Calificaciones" ;
		i = opciones;
		cin >> opciones;
		switch (opciones)
		{
		case 1:
			cout << "Ingresa el nombre:";
			getline(cin,alumnos[i].nombre);
			cin.ignore();
			break;
		case 2:
			cout << "Ingresa el apellido paterno:";
			getline(cin, alumnos[i].nombre);
			cin.ignore();
			break;
		case 3:
			cout << "Ingresa el apellido materno:";
			getline(cin, alumnos[i].nombre);
			cin.ignore();
			break;
		case 4:
			cout << "Ingresa el telegono:";
			getline(cin, alumnos[i].nombre);
			cin.ignore();
			break;
		case 5:
			cout << "Ingresa el correo:";
			getline(cin, alumnos[i].nombre);
			cin.ignore();
			break;
		case 6:
			cout << "Ingresa la matricula:";
			cin >> alumnos[i].matr;
			break;
		case 7:
			cout << "Ingresa las calificaciones:";
			cout << "\nIngresa la primera calificacion:";
			cin >> alumnos[i].calif[0];
			cout << "\nIngresa la siguiente calificacion:";
			cin >> alumnos[i].calif[1];
			cout << "\nIngresa la siguiente calificacion:";
			cin >> alumnos[i].calif[2];
			break;
		}
	}
	else {
		cout << "no se encontro el alumno.";
	}
	system("PAuse>nul");
	menu();
}
void eliminar() {
	validacosas = false;
	system("cls");
	cout << "Ingresa la matricula del alumno:";
	cin >> opciones;
	for (int i = 0; i < c; i++) {
		if (opcionesc == alumnos[i].matr) {
			validacosas = true;
			opciones = i;
			break;
		}
	}
	if (validacosas == true) {
		cout << "Se encontro el alumno:" << endl;
		cout << alumnos[opciones].matr << " " << alumnos[opciones].nombrep << " " << alumnos[opciones].nombrem << " " << alumnos[opciones].nombre << endl;
		cout << endl << "Quieres borrar el alumno?\n1.-si 2.-no";
		id = opciones;
		cin >> opciones;
		if (opciones == 1) {
			for (int i = id; i < c; i++) {
				alumnos[i] = alumnos[i + 1];
			}
			c--;
		}
	}
	else {
		cout << "no se encontro el alumno.";
	}
	system("PAuse>nul");
	menu();
}
void mostrar() {
	system("cls");
	for (int i = 0; i < c; i++) {
		cout << alumnos[i].matr << " " << alumnos[i].nombrep << " " << alumnos[i].nombrem << " " << alumnos[i].nombre << endl;
	}
	system("Pause>nul");
}
#include<iostream>
#include<string>
using namespace std;


int id = 0;
int c = 0;
struct datos {
	string nombre;
	string nombrep;
	string nombrem;
	string numero;
	string correo;
	string telefono;
	int matr;
	float calif[3];
	string direccion[2];
};

datos alumnos[100];

void mostrar();
void registrar();
void buscar();
void editar();
void eliminar();
void menu();

int opciones;

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
	cout << "Ingresa el nombre del alumno: ";
	getline(cin, alumnos[c].nombre);
	cout << "Ingresa el apellido paterno del alumno: ";
	getline(cin, alumnos[c].nombrep);
	cout << "Ingresa el apellido materno del alumno: ";
	getline(cin, alumnos[c].nombrem);
	cout << "Ingresa el telefono del alumno: ";
	getline(cin, alumnos[c].telefono);
	cout << "Ingresa el correo del alumno: ";
	getline(cin, alumnos[c].correo);
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

}
void editar(){
}
void eliminar(){
}
void mostrar() {
	system("cls");
	for (int i = 0; i <c; i++) {
		cout << alumnos[i].matr << " " << alumnos[i].nombrep << " " << alumnos[i].nombrem << " " << alumnos[i].nombre << endl;
	}
	system("Pause>nul");
}
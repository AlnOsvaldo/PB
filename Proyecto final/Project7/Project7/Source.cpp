#include<iostream>
using namespace std;

int main();
int opcion;
int nombre();
int apellidos();
int correo();
int direccion();
int telefono();
int calif();

int origen() {
	main();
	return 0;
}

int main() {
	system("cls");
	//Programa para crear una lista de alumnos
	cout << "El programa funciona ingresando el numero de la opcion deseada." << endl;
	cout << "1.-Ingresar nombre del alumno" << endl;
	cout << "2.-Ingresar apellido del alumno" << endl;
	cout << "3.-Ingresar correo electronico del alumno" << endl;
	cout << "4.-Ingresar telefono del alumno" << endl;
	cout << "5.-Ingresar calificaciones del alumno" << endl;
	cout << "6.-Ingresar direccion del alumno" << endl;
	cout << "7.-Salir del programa" << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		nombre();
		break;
	case 2:
		apellidos();
		break;
	case 3:
		correo();
		break;
	case 4:
		telefono();
		break;
	case 5:
		calif();
		break;
	case 6:
		direccion();
		break;
	case 7:
		break;
	default:
		cout << "Ingrese una opcion valida.";
		main();
		break;
	}
	return 0;
}
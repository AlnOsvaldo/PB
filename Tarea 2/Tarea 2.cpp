#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	cout << "Nombre" << endl;
	char nombre[20];
	cin >> nombre;
	cout << "Apellido" << endl;
	char apellido[20];
	cin >> apellido;
	cout << "Edad" << endl;
	int edad;
	cin >> edad;
	cout << "Telefono"<<endl;
	char Telefono[20];
	cin >> Telefono;
	cout << "Nombre: ";
	cout << apellido;
	cout << ", ";
	cout << nombre;
	cout << "." << endl;
	cout << "---"<<endl;
	cout << "Edad: ";
	cout << edad << " años." << endl;
	cout << "Telefono: +52 " << Telefono << endl;
	system("pause");
	return 0;



}
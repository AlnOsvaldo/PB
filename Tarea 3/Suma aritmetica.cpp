#include <iostream>
using namespace std;

void main() {
	cout << "Este programa encuentra la suma de los primeros `n` numeros multiplos de `m`" << endl;
	cout << "Introduce la cantidad de numeros (n): ";
	int n;
	cin >> n;
	cout << "introduce el numero multiplo deseado (m): ";
	int m;
	cin >> m;
	int f;
	f = (n * (n + 1) / 2)*m;
	cout << "-----" << endl;

	
	int o;
	o = m;
	cout << "(";
	for (int i = 0; i < n - 1; i++) {
		cout << o << "+";
		o = o + m;
	}
	cout << (o) << ")";

	cout <<endl<< "-----" << endl;
	
	cout << "La suma de los primeros " << n << " numeros multiplos de " << m << " es: " << f<<endl;
	

	system("pause");

	
}
#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void main() {

	//variables

	float a = 0, b = 0, c = 0, d = 0, x = 0, y = 0, z = 0, d2 = 0, i = 0, j = 0, k = 0, d3 = 0, ds = 0, dx = 0, dy = 0, dz = 0, sx = 0, sz = 0, sy = 0;

	//ingreso de datos

	cout << "introduce los coeficientes y el termino independiente de la forma:'Ax+By+Cz=D' de las tres ecuaciones." << endl;
	cout << "introduce los terminos de la primera ecuacion:" << endl;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;
	cout << "D: ";
	cin >> d;
	cout << "introduce los terminos de la segunda ecuacion:" << endl;
	cout << "A: ";
	cin >> x;
	cout << "B: ";
	cin >> y;
	cout << "C: ";
	cin >> z;
	cout << "D: ";
	cin >> d2;
	cout << "introduce los terminos de la tercera ecuacion:" << endl;
	cout << "A: ";
	cin >> i;
	cout << "B: ";
	cin >> j;
	cout << "C: ";
	cin >> k;
	cout << "D: ";
	cin >> d3;

	//operaciones
	ds = (a*y*k+x*j*c+i*b*z)-(c*y*i+z*j*a+k*b*x);
	cout << "El determinante del sistema es: " << ds << endl;

	dx =(d*y*k+d2*j*c+d3*b*z)-(c*y*d3+z*j*d+k*b*d2) ;
	cout << "El determinante de 'x' es: " << dx << endl;

	dy =(a*d2*k+x*d3*c+i*d*z)-(c*d2*i+z*d3*a+k*d*x);
	cout << "El determinante de 'y' es: " << dy << endl;

	dz =(a*y*d3+x*j*d+i*b*d2)-(d*y*i+d2*j*a+d3*b*x) ;
	cout << "El determinante de 'z' es: " << dz << endl;

	//soluciones

	sx = dx / ds;
	cout << "El valor de 'x' es: " << sx << "(" << dx << "/" << ds << ")" << endl;

	sy = dy / ds;
	cout << "El valor de 'y' es: " << sy << "(" << dy << "/" << ds << ")" << endl;

	sz = dz / ds;
	cout << "El valor de 'z' es: " << sz << "(" << dz << "/" << ds << ")" << endl;



	bool comprobacion;

	comprobacion = a * sx + b * sy + c * sz == d;

	if (comprobacion = 1) {
		cout << endl<< "comprobacion verdadera";
	}
	system("pause>nul");
}
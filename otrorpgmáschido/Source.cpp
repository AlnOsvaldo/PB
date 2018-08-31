#include<iostream>
#include<time.h>
using namespace std;
//variables globales
int opcion=0,hp=1,at=0,dinero=0,vidaspooky=20,vidaogro=25, vidarey=35, vidacd=50;
bool spooky = true, btejado=true, ogro=true, rey=true;

//valores

//funciones
void torre();
void torre2();
void torre3();
void plaza();
void herrero();
void medico();
void iglesia();
void duelospooky();
void dueloogro();
void duelorey();
void duelomatadragones();
void habitaciondelrey();
void tejado();
//funcion principal	
void main(){
	if (hp > 0) {
		cout << "Bienvenido a la aventurita2.0" << endl;
		cout << "Elige un personaje:" << endl << "1.-Guerrero(35hp,6at,$25)" << endl << "2.-Asesino(20hp,8at,$35)" << endl << "3.-Hechicero(15hp,12at,$15)" << endl;
		cin >> opcion;
		if (opcion == 1) {
			hp = 35;
			at = 6;
			dinero = 25;
		}
		else if (opcion == 2) {
			hp = 20;
			at = 8;
			dinero = 35;
		}
		else if (opcion == 3) {
			hp = 15;
			at = 12;
			dinero = 15;
		}
		system("cls");
		cout << "Hp:" << hp << "$$" << dinero << endl;
		cout << "Estas en la cercania de un pueblo" << endl;
		system("pause");
		plaza();
	}
	else {
		system("cls");
		cout << "Fin del juego";
		system("pause");
	}
}
void plaza() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	cout << "Te encuentras en la plaza ¿Que deseas hacer?:";
	cout <<endl<< "1.-Ir con el herrero."<<endl<<"2.- Ir a la iglesia."<<endl<< "3.-Visitar al medico."<<endl<< "4.-Ir a la torre principal. "<<endl<<"5.-Torre no tan principal"<<endl;
	cin >> opcion;
	if (opcion == 1) {
		herrero();
	}
	else if (opcion == 2) {
		iglesia();
	}
	else if (opcion == 3) {
		medico();
	}
	else if (opcion == 4) {
		torre();
	}
	else if (opcion == 5) {
		torre3();
	}
}
void herrero() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	cout << "Herrero: Puedo mejorar tu armamento por $20";
	cout << endl << "1.-Mejorar armamento" << endl << "2.-Regresar a la plaza"<<endl;
	cin >> opcion;
	if (opcion == 1) {
		if (dinero >= 20) {
			at = at + 4;
			dinero = dinero - 20;
			herrero();
		}
		else {
			cout << "No completas la mejora" << endl;
			system("pause");
			herrero();
		}
	}
	else if (opcion == 2) {
		plaza();
	}
}
void iglesia() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	cout << "Se te acerca un sr, te pide una limosna" << endl;
	cout << "1.-Dar $5" << endl << "2.-Dar $25" << endl << "3.-Regresar a la plaza"<<endl;
	cin >> opcion;
	if (opcion == 1) {
		if (dinero >= 5) {
			cout << "Te sientes mejor contigo mismo" << endl;
			dinero = dinero - 5;
			system("pause");
			iglesia();
		}
		else {
			cout << "no completas la limosna" << endl;
			iglesia();
		}
	}
	else if (opcion == 2) {
		if (dinero >= 25) {
			cout << "Sientes un bienestar"<<endl;
			hp = hp + 10;
			dinero = dinero - 25;
			at = at + 2;
			system("Pause");
			iglesia();
		}
		else {
			cout << "No completas" << endl;
			system("pause");
			iglesia();
		}
	}
	else if (opcion == 3) {
		plaza();
	}
}
void medico() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	cout << "Ocupas algun medicamento?" << endl;
	cout << "1.-Curar 5hp (-$5)" << endl << "2.-Curar 15hp (-$10)" << endl<<"3.-Regresar a la plaza";
	cin >> opcion;
	if (opcion == 1) {
		if (dinero >= 5) {
			hp = hp + 5;
			dinero = dinero - 5;
			medico();
		}
		else {
			cout << "No completas" << endl;
			medico();
		}
	}
	else if (opcion == 2) {
		if (dinero >= 10) {
			hp = hp + 15;
			dinero = dinero - 10;
			medico();
		}
		else {
			cout << "No completass" << endl;
			system("pause");
			medico();
		}
	}
	else if (opcion == 3) {
		plaza();
	}
}
void torre() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	if (spooky) {
		duelospooky();
	}
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	cout << "La torre tiene buenas vistas." << endl;
	cout << "1.-Un puente te lleva a otra torre." << endl;
	if (btejado) {
		cout << "2.-Puedes saltar a un tejado desde aqui..." << endl;
	}
	cout << "3.-Puedes regresar a la plaza";
	cin >> opcion;
	if (opcion == 1) {
		torre2();
	}
	else if (opcion==2) {
		tejado();
	}
	else if (opcion == 3) {
		plaza();
	}
	system("pause");
}
void torre2() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	if (ogro) {
		dueloogro();
	}
	cout << "Observas la puerta del rey" << endl;
	cout << "1.-Entrar 2.-Regresar a la otra torre." << endl;
	cin >> opcion;
	if (opcion == 1) {
		duelorey();
	}
	else if (opcion == 2) {
		torre();
	}
}
void duelospooky() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;

	if (hp <= 0) {
		cout << "has muerto" << endl;
		main();
	}
	cout << "Un esqueleto salta frente a ti" << endl;
	cout << "Vida del esqueleto:" << vidaspooky << endl;
	cout << "1.-Atacar 2.-Huir"<<endl;
	cin >> opcion;
	if (opcion == 1) {
		system("cls");
		cout << "Hp:" << hp << "$:" << dinero << endl;
		vidaspooky = vidaspooky - at;
		cout << "El esqueleto te hace 4 de daño" << endl;
		hp = hp - 4;
		system("pause");
		if (vidaspooky <= 0) {
			system("cls");
			cout << "Hp:" << hp << "$:" << dinero << endl;
			cout << "Has derrotado al esqueleto, ganas $15" << endl;
			dinero = dinero + 15;
			spooky = false;
			system("pause");
			torre();
		}
		else {
			duelospooky();
		}

	}
	else if (opcion == 2) {
		plaza();
	}

}
void tejado() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	cout << "Saltas al tejado, te haces 10 de daño"<< endl;
	hp = hp - 10;

	if (hp <= 0) {
		cout << "has muerto" << endl;
		main();
	}
	cout << "Recojes $25"<<endl;
	dinero = dinero + 25;
	cout << "Vuelves a la plaza" << endl;
	system("pause");
	btejado = false;
	plaza();
}
void dueloogro() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;

	if (hp <= 0) {
		cout << "has muerto" << endl;
		main();
	}
	cout << "El ogro defiende la puerta del rey" << endl;
	cout << "Vida del ogro:" << vidaogro << endl;
	cout << "1.-Atacar 2.-Huir" << endl;
	cin >> opcion;
	if (opcion == 1) {
		system("cls");
		cout << "Hp:" << hp << "$:" << dinero << endl;
		vidaogro = vidaogro - at;
		cout << "El ogro te hace 6 de daño" << endl;
		hp = hp - 6;
		system("pause");
		if (vidaogro <= 0) {
			system("cls");
			cout << "Hp:" << hp << "$:" << dinero << endl;
			cout << "Has derrotado al ogro, ganas $25" << endl;
			dinero = dinero + 25;
			ogro = false;
			system("pause");
			torre2();
		}
		else {
			dueloogro();
		}

	}
	else if (opcion == 2) {
		torre();
	}
}
void duelorey() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;

	if (hp <= 0) {
		cout << "has muerto" << endl;
		main();
	}
	cout << "El rey te observa" << endl;
	cout << "Vida del rey:" << vidarey << endl;
	cout << "1.-Atacar 2.-Huir" << endl;
	cin >> opcion;
	if (opcion == 1) {
		system("cls");
		cout << "Hp:" << hp << "$:" << dinero << endl;
		vidarey = vidarey - at;
		cout << "El Reyy te hace 8 de daño" << endl;
		hp = hp - 8;
		system("pause");
		if (vidarey <= 0) {
			system("cls");
			cout << "Hp:" << hp << "$:" << dinero << endl;
			cout << "Has derrotado al Rey, ganas $40" << endl;
			dinero = dinero + 40;
			rey = false;
			system("pause");
			habitaciondelrey();
		}
		else {
			duelorey();
		}

	}
	else if (opcion == 2) {
		torre2();
	}
}
void habitaciondelrey() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;

	if (hp <= 0) {
		cout << "has muerto" << endl;
		main();
	}
	cout << "En la habitacion del rey hay muchos tesoros"<<endl;
	hp = hp + 20;
	at = at + 2;
	dinero = dinero + 30;
	cout << "Regresas a la torre" << endl ;
	system("pause");
	torre2();
}
void torre3() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;
	if (rey == true || ogro == true||spooky==true) {
		cout << "Aun no puedes entrar" << endl;
		cout << "Regresas a la plaza" << endl;
		system("Pause");
		plaza();
	}
	cout << "Se encuentra sentado el caballero del rey" << endl;
	system("pause");
	duelomatadragones();
}
void duelomatadragones() {
	system("cls");
	cout << "Hp:" << hp << "$:" << dinero << endl;

	if (hp <= 0) {
		cout << "has muerto" << endl;
		main();
	}
	cout << "El CAZADRAGONES ataca" << endl;
	cout << "Vida del CAZADRAGONES:" << vidacd << endl;
	cout << "1.-Atacar 2.-Huir" << endl;
	cin >> opcion;
	if (opcion == 1) {
		system("cls");
		cout << "Hp:" << hp << "$:" << dinero << endl;
		vidacd = vidacd - at;
		cout << "El CAZADRAGONES te hace 12 de daño" << endl;
		hp = hp - 12;
		system("pause");
		if (vidarey <= 0) {
			system("cls");
			cout << "Hp:" << hp << "$:" << dinero << endl;
			cout << "Has derrotado al CAZADRAGONES" << endl;
			cout << "El juego ha acabado.";
			rey = false;
			system("pause");
		}
		else {
			duelomatadragones();
		}

	}
	else if (opcion == 2) {
		plaza();
	}
}


#include "pch.h"
#include <iostream>
#include <set>
#include "Habitacion.h"
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include <sstream>
#include "Enemigo.h"
#include "Minion.h"
#include "Llave.h"
#include "Boss.h"
#include "Player.h"

using std::cout; using std::cin; using std::string; using std::endl; using std::map; using std::multimap;
using std::vector; using std::forward_list;
int diccionarioDePalabras(string);

int main()
{
	std::map<int, Habitacion> habitacion {
		{1, Habitacion(forward_list<Puerta> {
			Puerta(2,false),
			Puerta(3,false),
			Puerta(4,false)})},
		{2, Habitacion(forward_list<Puerta> {
			Puerta(1,false),
			Puerta(3,false),
			Puerta(5,false)},
			vector<Enemigo*> {new Minion("minion",6,2,1)},
			vector<Objeto*> {new Espada("espada2",10),new Llave("llave numero 14",14)}
		)},
		{3,Habitacion(forward_list<Puerta> {
			Puerta(1,false),
			Puerta(2,false),
			Puerta(4,false),
			Puerta(6,true)},
			vector<Enemigo*> {new Minion("minion",6,10,1)}
		)},
		{4,Habitacion(forward_list<Puerta> {
			Puerta(1,false),
			Puerta(3,false),
			Puerta(7,false)},
			vector<Enemigo*> {new Minion("minion",9,4,8)}
		)},
		{5,Habitacion(forward_list<Puerta> {
			Puerta(2,false),
			Puerta(6,true),
			Puerta(8,false)},
			vector<Enemigo*> {new Minion("minion",10,5,7),new Minion("minion",7,1,6)},
			vector<Objeto*> {new Espada("espada5",2)}
		)},
		{6,Habitacion(forward_list<Puerta> {
			Puerta(3,false),
			Puerta(5,false),
			Puerta(7,false),
			Puerta(9,true)},
			vector<Enemigo*> {new Boss("boss",2,9,7)},
			vector<Objeto*> {new Escudo("escudo4",4), new Escudo("escudo5",6)}
		)},
		{7,Habitacion(forward_list<Puerta>{
			Puerta(4,false),
			Puerta(6,true),
			Puerta(10,false)},
			vector<Objeto*> {new Escudo("escudo1",1)}
		)},
		{8,Habitacion(forward_list<Puerta> {
			Puerta(5,false),
			Puerta(9,true)},
			vector<Objeto*> {new Llave("llave numero 9",9)}
		)},
		{9,Habitacion(forward_list<Puerta> {
			Puerta(6,true),
			Puerta(8,false),
			Puerta(10,false),
			Puerta(11,true)},
			vector<Enemigo*> {new Boss("boss",6,5,3)},
			vector<Objeto*> {new Espada("espada1",6), new Espada("espada3",1)}
		)},
		{10,Habitacion(forward_list<Puerta> {
			Puerta(7,false),
			Puerta(9,true)},
			vector<Objeto*> {new Escudo ("escudo2",4), new Espada ("espada4",9), new Llave ("llave numero 11",11)}
		)},
		{11,Habitacion(forward_list<Puerta> {
			Puerta(9,true),
			Puerta(12,true),
			Puerta(13,false),
			Puerta(14,true)},
			vector<Objeto*> {new Llave("llave numero 12",12)}
		)},
		{12,Habitacion(forward_list<Puerta> {
			Puerta(11,true),
			Puerta(13,false),
			Puerta(15,true)},
			vector<Enemigo*> {new Boss ("boss",8,5,9)},
			vector<Objeto*> {new Escudo ("escudo 3",3)}
		)},
		{13,Habitacion(forward_list<Puerta> {
			Puerta(11,true),
			Puerta(12,true),
			Puerta(14,true),
			Puerta(16,false)},
			vector<Objeto*> {new Llave ("llave numero 6",6)}
		)},
		{14,Habitacion(forward_list<Puerta> {
			Puerta(11,true),
			Puerta(13,false),
			Puerta(17,false)}
		)},
		{15,Habitacion(forward_list<Puerta> {
			Puerta(12,true),
			Puerta(16,false),
			Puerta(18,false)}
		)},
		{16,Habitacion(forward_list<Puerta> {
			Puerta(13,true),
			Puerta(15,false),
			Puerta(17,false),
			Puerta(18,false),
			Puerta(19,false)}
		)},
		{17,Habitacion(forward_list<Puerta> {
			Puerta(14,true),
			Puerta(16,false),
			Puerta(19,false)}
		)},
		{ 18,Habitacion(forward_list<Puerta> {
			Puerta(15,true),
			Puerta(19,false),
			Puerta(20,false)}
		)},
		{ 19,Habitacion(forward_list<Puerta> {
			Puerta(16,true),
			Puerta(17,false),
			Puerta(20,false)}
		) },
		{ 20,Habitacion(forward_list<Puerta> {
			Puerta(18,true),
			Puerta(19,false)}
		) }
	};

	Player jugador;
	string palabraABuscar;
	string caracterABorrar = " ";
	string palabraABuscarCopia;
	string guardaPalabra;
	string haabitacion = "habitacion";
	string puuerta = "puerta";

	std::vector<string> stringSepardo;

	size_t posicionEnelString = 0;

	jugador.setHabitacion(6);
	cout << jugador.habAct << endl;

	printf("¿Que quieres hacer?\n");
	std::cin >> palabraABuscar;

	palabraABuscarCopia = palabraABuscar;

	while (posicionEnelString != string::npos) {
		posicionEnelString = palabraABuscarCopia.find(caracterABorrar);
		guardaPalabra = palabraABuscarCopia.substr(0, posicionEnelString);
		stringSepardo.push_back(guardaPalabra);
		palabraABuscarCopia.erase(0, posicionEnelString + caracterABorrar.length());
	}

	switch (diccionarioDePalabras(palabraABuscar)) {
	case 1:
		if (size_t encontrar = palabraABuscar.find(haabitacion)) {
			if (size_t encontraNumero = palabraABuscar.find_first_of("1234567890")) {
				jugador.mover(encontraNumero);
			}
			cout << jugador.habAct;
		}
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		if (size_t encontrar = palabraABuscar.find(puuerta)) {
			
		}
	}
	
}


int diccionarioDePalabras(string palabraABuscar) {
	bool encontrado = true;
	bool busquedaRealizada = false;

	std::multimap<int, string> multiMapDiccionario;


	multiMapDiccionario.insert(std::pair<int, string>(1, "entrar"));
	multiMapDiccionario.insert(std::pair<int, string>(1, "llevar"));
	multiMapDiccionario.insert(std::pair<int, string>(1, "mover"));
	multiMapDiccionario.insert(std::pair<int, string>(1, "desplazar"));
	multiMapDiccionario.insert(std::pair<int, string>(1, "cambiar"));
	multiMapDiccionario.insert(std::pair<int, string>(1, "ir"));

	multiMapDiccionario.insert(std::pair<int, string>(2, "recoger"));
	multiMapDiccionario.insert(std::pair<int, string>(2, "levantar"));

	multiMapDiccionario.insert(std::pair<int, string>(3, "intercambiar"));

	multiMapDiccionario.insert(std::pair<int, string>(4, "atacar"));

	multiMapDiccionario.insert(std::pair<int, string>(5, "tirar"));
	multiMapDiccionario.insert(std::pair<int, string>(5, "dejar"));

	multiMapDiccionario.insert(std::pair<int, string>(6, "revelar"));
	multiMapDiccionario.insert(std::pair<int, string>(6, "obtener"));
	multiMapDiccionario.insert(std::pair<int, string>(6, "descifrar"));
	multiMapDiccionario.insert(std::pair<int, string>(6, "consultar"));

	multiMapDiccionario.insert(std::pair<int, string>(7, "abrir"));

	std::multimap<int, string>::iterator it;
	for (it = multiMapDiccionario.begin(); it != multiMapDiccionario.end(); it++) {
		if (palabraABuscar == it->second) {
			return it->first;
		}
	}

	/*std::map<string, std::vector<string>> mapDicciomario{
		{"abrir",{"ABRIR","Abrir","entrar","ENTRAR","Entrar,puerta,Puerta,PUERTA"}},
	{"atacar", { "ATACAR","Atacar","Enfrentar","ENFRENTAR", "enemigo","Enemigo","ENEMIGO","boss","Boss","BOSS","minion","Minion","MINION" }},
	{"recoger",{"RECOGER","Recoger","llave","Llave","LLAVE", "espada","Espada","ESPADA","escudo","Escudo","ESCUDO"}},
	{"intercambiar",{"Intercambiar","INTERCAMBIAR","Cambiar","cambiar","CAMBIAR"}},
	{"soltar",{"SOLTAR","Soltar","dejar","Dejar","DEJAR"} }

	};

	std::map<string, std::vector<string>>::iterator it;
	for (it = mapDicciomario.begin(); it != mapDicciomario.end(); it++) {
		if (palabraABuscar == it->first)
			std::cout << it->first << std::endl;
		else {
			for (std::vector<string>::iterator vsptr = it->second.begin(); vsptr != it->second.end(); vsptr++) {
				if (palabraABuscar == *vsptr)
					std::cout << *vsptr << std::endl;
				else
					encontrado = false;
			}
		}
	}

	if (encontrado != false) {
		std::cout << "Esa palabra no es valida, no seas trollete, usa otra\n";
		diccionarioDePalabras();
	}
	return 1;*/
}
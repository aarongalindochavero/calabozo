#pragma once
#include "Puerta.h"
#include "Objeto.h"
#include "Enemigo.h"
#include "Escudo.h"
#include "Espada.h"
#include <string>
#include <map>
#include <vector>
#include <forward_list>
#include <vector>

using std::string;

class Habitacion
{
public:
	Habitacion();
	void revelarInformacion();

	std::string infoPuertas, infoEnemigos, infoObjetos;
	std::forward_list<Puerta> listaPuertas;
	std::vector<Enemigo*> vectorEnemigo;
	std::vector<Objeto*> vectorObjetos;
	std::vector<Espada> vectorEspada;	

	Habitacion(std::forward_list<Puerta> door, std::vector <Enemigo*> vecEnemigo) :
		listaPuertas(door), vectorEnemigo(vecEnemigo) {};
	Habitacion(std::forward_list<Puerta> door) :
		listaPuertas(door) {};
	Habitacion(std::forward_list<Puerta> door, std::vector<Enemigo*> vecEnemigo, std::vector<Objeto*> vecObjeto) :
	listaPuertas(door), vectorEnemigo(vecEnemigo), vectorObjetos(vecObjeto){};
	Habitacion(std::forward_list<Puerta> door, std::vector<Objeto*> vecObjeto) :
		listaPuertas(door), vectorObjetos(vecObjeto) {};

	~Habitacion();
};


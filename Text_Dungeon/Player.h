#pragma once
#include "Escudo.h"
#include "Espada.h"
#include "Llave.h"
#include "Puerta.h"
#include "Habitacion.h"
#include <set>
#include <vector>
class Player
{
public:
	int vida = 100;
	std::set<Llave> llavero;
	std::vector<Objeto> objetos;
	int poder = 1;
	int defensa = 1;
	int habAct = 1;
	Player();
	~Player();

	void añadirObjetos(std::map<int, Habitacion>);
	void recogerLlave(std::map<int, Habitacion>);
	void recogerEspada(std::map<int, Habitacion>);
	void recogerEscudo(std::map<int, Habitacion>);
	void atacar(std::map<int, Habitacion>);
	void abrirPuerta(std::map<int, Habitacion>);
	void desbloquearPuerta(std::map<int, Habitacion>);
	void intercambiarEspada(std::map<int, Habitacion>);
	void intercambiarEscudo(std::map<int, Habitacion>);
	void intercambiarLlave(std::map<int, Habitacion>);
	void consultarInventario();
	void tirarObjetos(std::map<int, Habitacion>);
	void lootearEnemigo();
	void curar();
	void crafteo();
	void setHabitacion(int habitacion);
	void mover(int habitacion);
};

/*
1 cambiar de habitacion
1.1 abrir la puerta
1.2 desbloquear la puerta (si esta cerrada)
2. recoger objetos
2.1 recoger escudo
2.2recoger espada
recoger llave
2.4 intercambio de escudo
2.5 intercambio de espada
2.6 intercambio de llave
3 atacar
3.1 enemigo minion
3.2 enemigo chido
3.3 enemigo boss
4 defensa automatica
5consultar inventario
6 tirar objetos
7informacion de la habiitacion
8 lootear enemigos
8.1 ver una lista de objetos que dropeo
8.2 tomar los objetos que quiera
8.3 agregar una lista en la clase enemigo que almacene una 
	lsita de strings, donde estan especificados los elementos
	que dropea para craftear
9 curarase (agregar el item de poti, la subclase, pues)
10 craftear pociones y alimentos para curarse
11 recetario de cosas que puede craftear, y que necesita
12 bestiario
*/
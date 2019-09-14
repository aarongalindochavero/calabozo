#pragma once
#include "Objeto.h"
class Espada :
	public Objeto
{
public:
	Espada(string nombreDeLaEspada, int defensaDeLaEspada) : ataque(defensaDeLaEspada), Objeto(nombreDeLaEspada) {}
	Espada();
	~Espada();

	int getAtaque();
private:
	std::string nombreDelEscudo;
	int ataque;
};


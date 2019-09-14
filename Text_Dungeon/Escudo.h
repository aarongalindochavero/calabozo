#pragma once
#include "Objeto.h"
class Escudo :
	public Objeto
{
public:
	Escudo(string nombreDelEscudo, int defensaDelEscudo): defensa(defensaDelEscudo), Objeto(nombreDelEscudo) {}
	Escudo();
	~Escudo();

	int getDefensa();
private:
	std::string nombreDelEscudo;
	int defensa;
};


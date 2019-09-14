#pragma once
#include <string>

using std::string;

class Enemigo
{
public:
	Enemigo(string nombreRecibe, int vidaRecibe, int fuerzaRecibe, int defensaRecibe) : 
		nombre(nombreRecibe),vida(vidaRecibe),fuerza(fuerzaRecibe),defensa(defensaRecibe){}
	Enemigo();
	~Enemigo();

private:
	int vida, defensa, fuerza;
	string nombre;
};


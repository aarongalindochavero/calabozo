#pragma once
#include "Enemigo.h"
class Minion :
	public Enemigo
{
public:
	Minion(string nombreEnvia, int vidaEnvia, int fuerzaEnvia, int defensaEnvia) :
		Enemigo(nombreEnvia, vidaEnvia, fuerzaEnvia, defensaEnvia) {}
	Minion();
	~Minion();
};


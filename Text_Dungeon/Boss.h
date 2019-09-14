#pragma once
#include "Enemigo.h"
class Boss :
	public Enemigo
{
public:
	Boss(string nombreEnvia,int vidaEnvia,int fuerzaEnvia,int defensaEnvia):
		Enemigo(nombreEnvia,vidaEnvia,fuerzaEnvia,defensaEnvia){}
	Boss();
	~Boss();
};


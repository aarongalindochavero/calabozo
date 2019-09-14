#pragma once
#include "Objeto.h"
class Llave :
	public Objeto
{
public:
	Llave(std::string nombreDeLaLlaveEnvia, int numeroLlave):llaveID(numeroLlave),Objeto(nombreDeLaLlaveEnvia){}
	Llave();
	~Llave();

private:
	int llaveID;
};


#pragma once
#include <string>

using std::string;

class Objeto
{
public:
	Objeto(string nombreDelObjeto) :nombre(nombreDelObjeto) {}
	
	Objeto();
	~Objeto();

private:
	int ID;
	string nombre;
};


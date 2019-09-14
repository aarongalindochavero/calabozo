#pragma once
class Puerta
{
public:
	Puerta(int IDPuerta, bool estaCerrada):ID(IDPuerta),cerrada(estaCerrada){}
	void recuperarInformacion();

	Puerta();
	~Puerta();
private:
	int ID;
	bool cerrada;
};


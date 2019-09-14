#include "pch.h"
#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}

void Player::añadirObjetos(std::map<int, Habitacion> habitacion) {
	
}

void Player::recogerLlave(std::map<int, Habitacion> habitacion) {

}

void Player::recogerEspada(std::map<int, Habitacion> habitacion) {

}

void Player::recogerEscudo(std::map<int, Habitacion> habitacion) {

}

void Player::atacar(std::map<int, Habitacion> habitacion) {

}

void Player::abrirPuerta(std::map<int, Habitacion> habitacion) {
	habitacion.at(habAct).listaPuertas.max_size();

	std::forward_list<Puerta>::iterator it;
	if (habitacion.max_size > 0) {
		for (it = habitacion.at(habAct).listaPuertas.begin(); it != habitacion.at(habAct).listaPuertas.end(); it++) {
			
		}
	}
}

void Player::desbloquearPuerta(std::map<int, Habitacion> habitacion) {

}

void Player::intercambiarEspada(std::map<int, Habitacion> habitacion) {

}

void Player::intercambiarEscudo(std::map<int, Habitacion> habitacion) {

}

void Player::intercambiarLlave(std::map<int, Habitacion> habitacion) {

}

void Player::consultarInventario() {

}

void Player::tirarObjetos(std::map<int, Habitacion> habitacion) {

}

void Player::lootearEnemigo() {

}

void Player::curar() {

}

void Player::crafteo() {

}

void Player::setHabitacion(int habitacion) {
	habAct = habitacion;
}

void Player::mover(int habitacion)
{
	setHabitacion(habitacion);
}

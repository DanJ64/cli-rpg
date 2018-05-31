#include "player.hpp"

Player::Player(){
}

void Player::byDefault(){
	vida = 100;
	mana = 20;
	magia = 20;
	fuerza = 15;
	ataque = 10;
}
		
void Player::setVida(int v){
	vida += v;
}
void Player::setMana(int m){
	mana += m;
}
void Player::setMagia(int mag){
	magia += mag;
}
void Player::setFuerza(int f){
	fuerza += f;
}
void Player::setAtaque(int a){
	ataque += a;
}
		
int Player::getVida(){
	return vida;
}
int Player::getAtaque(){
	return ataque;
}
int Player::getFuerza(){
	return fuerza;
}
int Player::getMana(){
	return mana;
}
int Player::getMagia(){
	return magia;
}
std::string Player::setPlayerName(){
	std::cin >> nombre;
	return nombre;
}

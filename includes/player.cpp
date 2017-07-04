#include "player.hpp"

player::player(){
}

void player::byDefault(){
	vida = 100;
	mana = 20;
	magia = 20;
	fuerza = 15;
	ataque = 10;
}
		
void player::setVida(int v){
	vida += v;
}
void player::setMana(int m){
	mana += m;
}
void player::setMagia(int mag){
	magia += mag;
}
void player::setFuerza(int f){
	fuerza += f;
}
void player::setAtaque(int a){
	ataque += a;
}
		
int player::getVida(){
	return vida;
}
int player::getAtaque(){
	return ataque;
}
int player::getFuerza(){
	return fuerza;
}
int player::getMana(){
	return mana;
}
int player::getMagia(){
	return magia;
}
std::string player::setPlayerName(){
	std::cin >> nombre;
	return nombre;
}

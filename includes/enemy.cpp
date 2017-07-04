#include "enemy.hpp"

enemy::enemy(){
}

void enemy::byDefault(){
			vida = 100;
			mana = 20;
			magia = 10;
			fuerza = 12;
			ataque = 10;
		}
		
void enemy::setVida(int v){
	vida += v;
}
void enemy::setMana(int m){
	mana += m;
}
void enemy::setMagia(int mag){
	magia += mag;
}
void enemy::setFuerza(int f){
	fuerza += f;
}
void enemy::setAtaque(int a){
	ataque += a;
}
int enemy::getVida(){
	return vida;
}
int enemy::getAtaque(){
	return ataque;
}
int enemy::getFuerza(){
	return fuerza;
}
int enemy::getMana(){
	return mana;
}
int enemy::getMagia(){
	return magia;
}


#include "enemy.hpp"

Enemy::Enemy(){
}

void Enemy::byDefault(){
			vida = 100;
			mana = 20;
			magia = 10;
			fuerza = 12;
			ataque = 10;
		}
		
void Enemy::setVida(int v){
	vida += v;
}
void Enemy::setMana(int m){
	mana += m;
}
void Enemy::setMagia(int mag){
	magia += mag;
}
void Enemy::setFuerza(int f){
	fuerza += f;
}
void Enemy::setAtaque(int a){
	ataque += a;
}
int Enemy::getVida(){
	return vida;
}
int Enemy::getAtaque(){
	return ataque;
}
int Enemy::getFuerza(){
	return fuerza;
}
int Enemy::getMana(){
	return mana;
}
int Enemy::getMagia(){
	return magia;
}


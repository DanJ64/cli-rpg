#include <iostream>
#include <time.h>
#include <string>

using namespace std;

class player{
	private:
		int inventario[10];
		string nombre;
		int vida;
		int mana;
		int magia;
		int fuerza;
		int ataque;
	
	public:	
		
		void byDefault(){
			vida = 100;
			mana = 20;
			magia = 20;
			fuerza = 15;
			ataque = 10;
		}
		
		void setVida(int v){
			vida += v;
		}
		void setMana(int m){
			mana += m;
		}
		void setMagia(int mag){
			magia += mag;
		}
		void setFuerza(int f){
			fuerza += f;
		}
		void setAtaque(int a){
			ataque += a;
		}
		
		int getVida(){
			return vida;
		}
		int getAtaque(){
			return ataque;
		}
		int getFuerza(){
			return fuerza;
		}
		int getMana(){
			return mana;
		}
		int getMagia(){
			return magia;
		}
		string setPlayerName(){
			cin >> nombre;
			return nombre;
		}
};

class enemy{
	private:
		int inventario[10];
		string nombre;
		int vida;
		int mana;
		int magia;
		int fuerza;
		int ataque;
		
	public:
		void byDefault(){
			vida = 100;
			mana = 20;
			magia = 10;
			fuerza = 12;
			ataque = 10;
		}
		
		void setVida(int v){
			vida += v;
		}
		void setMana(int m){
			mana += m;
		}
		void setMagia(int mag){
			magia += mag;
		}
		void setFuerza(int f){
			fuerza += f;
		}
		void setAtaque(int a){
			ataque += a;
		}
		
		int getVida(){
			return vida;
		}
		int getAtaque(){
			return ataque;
		}
		int getFuerza(){
			return fuerza;
		}
		int getMana(){
			return mana;
		}
		int getMagia(){
			return magia;
		}
};

void pj(){
	
cout << "             . --- ." << endl;
cout << "           /        \\ " << endl;
cout << "          |  O  _  O |" << endl;
cout << "          |  ./   \\. |" << endl;
cout << "          /  `-._.-'  \\ " << endl;
cout << "        .' /         \\ `." << endl;
cout << "    .-~.-~/           \\~-.~-." << endl;
cout << ".-~ ~    |             |    ~ ~-." << endl;
cout << "`- .     |             |     . -'" << endl;
cout << "     ~ - |             | - ~" << endl;
cout << "         \\            /" << endl;
cout << "       ___\\           /___" << endl;
cout << "       ~;_  >- . . -<  _i~" << endl;
cout << "          `'         `'" << endl;
}

void beginning(){
	cout << "Te has despertado y te estan atacando...\n";
	cout << "Un troll a aparecido\n";
	enemy troll;
	troll.byDefault();
	
	player plr;
	plr.byDefault();
	
	
	
		do {
		int user;
		cout << "Salud: " << plr.getVida()
		<< " Magia: " << plr.getMana() << endl;
		cout << "1. Atacar\n2. Magia\n3. Rendirse\n" << endl;
		cout << "Introduce accion: ";
		cin >> user;
		if(user == 1){//ataque al enemigo
			if(troll.getVida() > 0){
				int total = plr.getAtaque() + plr.getFuerza();
				troll.setVida(-total);
				cout << "El enemigo ha perdido " << total
				<< " puntos de salud!\n" << endl;
				if(troll.getVida() <= 0){
					cout << "Enemigo abatido!" << endl;
					break;
				}
			}
		}else if(user == 2){// usar magia contra enemigo
			if (plr.getMana() > 0){
				cout << "El enemigo ha perdido " << plr.getMagia()
				<< " puntos de salud!\n" << endl;
				plr.setMana(-10);
				troll.setVida(-plr.getMagia());
			}else{
				cout << "No tienes mana suficiente!\n" << endl;
			}
		}else if (user == 3){// Rendirse
			cout << "Has sido prisionero de tu enemigo" << endl;
			break;
		}else{cout << "Argumento no valido" << endl;}
	
	system("pause");
	system("cls");
	
	//Ataque del enemigo
	if(troll.getVida() > 0){
		if(plr.getVida() > 0){
			int total = troll.getAtaque() + troll.getFuerza();
			cout << "Enemigo: "<< " Salud: " << troll.getVida() << endl;
	
			cout << "El enemigo ataca..." << endl;
			
			plr.setVida(-total);
			cout << "Has perdido " << total << " puntos de salud!\n" << endl;
			if (plr.getVida() <= 0){
				cout << "Has caido!\n";
				system("pause");
				system("cls");
				break;
			}
			system("pause");
			system("cls");
		}else{
			cout << "Has caido!\n";
		}
	}
	
	
	}while(plr.getVida() > 0);
	
	system("cls");
	if(troll.getVida() <= 0){
		cout << "Has ganado!" << endl;
	}else{
		cout << "Te acaban de joder el dia...\n";
	}
	
	cout << "Fin del juego\n" << endl;

}

int main(){
	cout << "Como te llamas? ";
	player plr;
	cout << "Bienvenido " << plr.setPlayerName() << endl;
	
	beginning();
	
	pj();
	
}

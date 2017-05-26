#include <iostream>
#include <time.h>
#include <string>

using namespace std;

class player{
	private:
		int inventario[10];
		string nombre;
	
	public:	
		int vida;
		int mana;
		int magia;
		int fuerza;
		int ataque;
		
		void byDefault(){
			vida = 100;
			mana = 20;
			magia = 20;
			fuerza = 10;
			ataque = 8;
		}
		
		void mod(int v,int m, int mag, int f, int a){
			vida += v;
			mana += m;
			magia += mag;
			fuerza += f;
			ataque += a;
		}
		
		string playerName(){
			cin >> nombre;
			return nombre;
		}
};

class enemy{
	private:
		int vida;
		int mana;
		int fuerza;
		int ataque;
		
	public:
		void byDefault(){
			vida = 100;
			mana = 10;
			
			fuerza = 8;
			ataque = 6;
		}
		
		void mod(int v,int m, int f, int a){
			vida += v;
			mana += m;
			fuerza += f;
			ataque += a;
		}
		int verVida(){
			return vida;
		}
		
		int verAtaque(){
			return ataque;
		}
		int verFuerza(){
			return fuerza;
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
	
	enemy troll;
	troll.byDefault();
	
	player plr;
	plr.byDefault();
	
	
	
		do {
		int user;
		cout << "Salud: " << plr.vida
		<< " Magia: " << plr.mana << endl;
		cout << "1. Atacar\n2. Magia\n3. Rendirse\n" << endl;
		cout << "Introduce accion: ";
		cin >> user;
		if(user == 1){//ataque al enemigo
			if(troll.verVida() > 0){
				int total = plr.ataque + plr.fuerza;
				troll.mod(-total, 0, 0, 0);
				cout << "El enemigo ha perdido " << total
				<< " puntos de salud!\n" << endl;
				if(troll.verVida() <= 0){
					cout << "Enemigo abatido!" << endl;
					break;
				}
			}
		}else if(user == 2){// usar magia contra enemigo
			if (plr.mana > 0){
				cout << "El enemigo ha perdido " << plr.magia
				<< " puntos de salud!\n" << endl;
				plr.mana -= 10;
				troll.mod(-plr.magia,0, 0, 0);
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
	if(troll.verVida() > 0){
		if(plr.vida > 0){
			int total = troll.verAtaque() + troll.verFuerza();
			cout << "Enemigo: "<< " Salud: " << troll.verVida() << endl;
	
			cout << "El enemigo ataca..." << endl;
			plr.vida -= total;
			cout << "Has perdido " << total << " puntos de salud!\n" << endl;
			if (plr.vida <= 0){
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
	
	
	}while(plr.vida > 0);
	
	system("cls");
	if(troll.verVida() <= 0){
		cout << "Has ganado!" << endl;
	}else{
		cout << "Te acaban de joder el dia...\n";
	}
	
	cout << "Fin del juego\n" << endl;

}

int main(){
	cout << "Como te llamas? ";
	player plr;
	cout << "Bienvenido " << plr.playerName() << endl;
	
	beginning();
	
	pj();
	

}
#include <iostream>
#include <time.h>
#include <string>

using namespace std;

string namePlayer(){
	string str;
	cin >> str;
	return str;
}

class player{
	public:
	int inventario[10];
	string nombre = namePlayer();
	int vida = 100;
	int mana = 20;
	int fuerza = 10;
	int ataque = 15;
};

class enemy{
	public:
	int vida = 100;
	int mana = 10;
	int fuerza = 5;
	int ataque = 18;
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

int main(){
	cout << "Como te llamas? ";
	player user;
	cout << "Bienvenido " << user.nombre << endl;
	
	enemy troll;
	enemy caballo;
	
	troll.vida -= 20;
	
	cout << "vida del troll: " << troll.vida << endl;
	cout << "vida del caballo: " << caballo.vida << endl;
	
	pj();
	

}

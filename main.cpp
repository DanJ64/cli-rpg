#include <iostream>
#include <time.h>
#include <string>
#include <stdlib.h>
#include "includes/defines.hpp"
using namespace std;


int main(){
	cout << "Como te llamas? ";
	player plr;
	cout << "Bienvenido " << plr.setPlayerName() << endl;
	
	beginning();
	
	pj();
	
}


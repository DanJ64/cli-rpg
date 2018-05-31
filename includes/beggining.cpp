void beginning(){
	cout << "Te has despertado y te estan atacando...\n";
	cout << "Un penguin a aparecido\n";
	Enemy penguin;
	penguin.byDefault();
	
	Player plr;
	plr.byDefault();
	
		do {
			int user;
			cout << "Salud: " << plr.getVida()
			<< " Magia: " << plr.getMana() << endl;
			cout << "1. Atacar\n2. Magia\n3. Rendirse\n" << endl;
			cout << "Introduce accion: ";
			cin >> user;
			if(user == 1){//ataque al enemigo
				if(penguin.getVida() > 0){
					int total = plr.getAtaque() + plr.getFuerza();
					penguin.setVida(-total);
					cout << "El enemigo ha perdido " << total
					<< " puntos de salud!\n" << endl;
					if(penguin.getVida() <= 0){
						cout << "Enemigo abatido!" << endl;
						break;
					}
				}
			}else if(user == 2){// usar magia contra enemigo
				if (plr.getMana() > 0){
					cout << "El enemigo ha perdido " << plr.getMagia()
					<< " puntos de salud!\n" << endl;
					plr.setMana(-10);
					penguin.setVida(-plr.getMagia());
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
			if(penguin.getVida() > 0){
				if(plr.getVida() > 0){
					int total = penguin.getAtaque() + penguin.getFuerza();
					cout << "Enemigo: "<< " Salud: " << penguin.getVida() << endl;
			
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
	if(penguin.getVida() <= 0){
		cout << "Has ganado!" << endl;
	}else{
		cout << "Te acaban de joder el dia...\n";
	}
	
	cout << "Fin del juego\n" << endl;

}

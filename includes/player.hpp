
#ifndef PLAYER_HPP
#define PLAYER_HPP


class player{
	private:
		int inventario[10];
		std::string nombre;
		int vida;
		int mana;
		int magia;
		int fuerza;
		int ataque;

	public:	
		player();
		void byDefault();
		void setVida(int v);
		void setMana(int m);
		void setMagia(int mag);
		void setFuerza(int f);
		void setAtaque(int a);
		int getVida();
		int getAtaque();
		int getFuerza();
		int getMana();
		int getMagia();
		std::string setPlayerName();
};

#endif

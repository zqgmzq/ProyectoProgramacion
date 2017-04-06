#ifndef GAME_HPP
#define GAME_HPP

#include "Escena.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
using namespace std;

class Escena;

class Game {
	public:
		Game();
		void run();
		~Game();
		
		void CambiarEscena(Escena* nuevaEscena);
	
	protected:
		void processEvents();
		void update();
		void render();
		
		sf::RenderWindow* mWindow;
		Escena* _escenaActual;
		sf::Clock _clock;
		
};

#endif

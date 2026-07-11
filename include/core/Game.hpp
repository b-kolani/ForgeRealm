#pragma once
#include <SFML/Graphics.hpp>

class	Game
{
	public:

							Game();

		void				update();

		void				render(sf::RenderWindow& window);
	
	private:
		sf::RectangleShape	m_player;
};


#pragma once

#include <SFML/Graphics.hpp>
#include "core/Input.hpp"
#include "game/Player.hpp"

class	Game
{
	public:
							Game();
		void				update(sf::Time deltaTime, const Input& input);
		void				render(sf::RenderWindow& window);
	
	private:
		Player				m_player;
		sf::View			m_camera;
		float				m_playerSpeed = 250.f;
};

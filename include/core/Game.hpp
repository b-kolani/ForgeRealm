#pragma once

#include "core/Input.hpp"
#include "game/Player.hpp"
#include "game/World.hpp"
#include "graphics/WorldRenderer.hpp"
#include "graphics/PlayerRenderer.hpp"
#include <SFML/Graphics.hpp>

class	Game
{
	public:
							Game();
		void				update(sf::Time deltaTime, const Input& input);
		void				render(sf::RenderWindow& window);
	
	private:
		Player				m_player;
		World				m_world;
		WorldRenderer		m_WorldRenderer;
		PlayerRenderer		m_playerRenderer;

};

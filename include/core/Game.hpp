#pragma once

#include "core/Input.hpp"
#include "game/Player.hpp"
#include "game/World.hpp"
#include "graphics/WorldRender.hpp"
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
		WorldRender			m_worldRender;
		sf::View			m_camera;
		float				m_playerSpeed = 250.f;
};

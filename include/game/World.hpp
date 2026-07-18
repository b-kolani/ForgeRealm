#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "game/Tile.hpp"

class	World
{
	public:
								World(std::size_t width, std::size_t height);

		void					update(sf::Time deltaTime);
		Tile&					getTile(std::size_t x, std::size_t y);
		const Tile&				getTile(std::size_t x, std::size_t y) const;

		const std::size_t		getWidth() const;
		const std::size_t		getHeight() const;
		bool					contains(std::size_t x, std::size_t y) const;
		static constexpr float	TileSize = 32.f;

	private:
		std::size_t				getIndex(std::size_t x, std::size_t y) const;
		std::vector<Tile>		m_tiles;
		std::size_t				m_width;
		std::size_t				m_height;
};

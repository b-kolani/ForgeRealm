#pragma once

#include <vector>
#include "game/Tile.hpp"
#include <SFML/Graphics.hpp>

class	World
{
	public:
								World(std::size_t width, std::size_t height);

		Tile&					getTile(std::size_t x, std::size_t y);
		const Tile&				getTile(std::size_t x, std::size_t y) const;

		const std::size_t		getWidth() const;
		const std::size_t		getHeight() const;
		bool					contains(std::size_t x, std::size_t y) const;

	private:
		std::size_t				getIndex(std::size_t x, std::size_t y) const;
		std::vector<Tile>		m_tiles;
		std::size_t				m_width;
		std::size_t				m_height;
};

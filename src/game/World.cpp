#include "game/World.hpp"
#include <stdexcept>

World::World(std::size_t width, std::size_t height):
    m_tiles(width * height),
    m_width(width),
    m_height(height)
{
    generateFlatworld();
}

void    World::update(sf::Time deltaTime)
{}

std::size_t World::getIndex(std::size_t x, std::size_t y) const
{
    if (x >= m_width || y >= m_height)
    {
        throw std::out_of_range("Tile coordinates out of bounds");
    }
    return (y * m_width + x);
}

Tile&   World::getTile(std::size_t x, std::size_t y)
{
    // std::size_t index = getIndex(x, y);

    return m_tiles[getIndex(x, y)];
}

const Tile& World::getTile(std::size_t x, std::size_t y) const
{
    // std::size_t index = getIndex(x, y);
    
    return m_tiles[getIndex(x, y)];
}

const std::size_t  World::getWidth() const
{
    return m_width;
}

const std::size_t World::getHeight() const
{
    return m_height;
}

bool    World::contains(std::size_t x, std::size_t y) const
{
    return (x < m_width && y < m_height);
}

void    World::generateFlatworld()
{
    for (std::size_t y = m_height - 3; y < m_height; ++y)
    {
        for (std::size_t x = 0; x < m_width; ++x)
        {
            getTile(x, y).setType(TileType::Dirt);
        }
    }
}


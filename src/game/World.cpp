#include "game/World.hpp"
#include <stdexcept>

World::World(std::size_t width, std::size_t height):
    m_tiles(width * height),
    m_width(width),
    m_height(height)
{
    // for (std::size_t y = height - 3; y < height; ++y)
    // {
    //     for (std::size_t x = 0; x < width; ++x)
    //     {
    //         getTile(x, y).setType(TileType::Dirt);
    //     }
    // }
}

std::size_t World::getIndex(std::size_t x, std::size_t y) const
{
    if (x >= m_width || y >= m_height)
    {
        throw std::out_of_range("Tile index out of the range.");
    }
    return (y * m_width + x);
}

Tile&   World::getTile(std::size_t x, std::size_t y)
{
    std::size_t index = getIndex(x, y);

    return m_tiles[index];
}

const Tile& World::getTile(std::size_t x, std::size_t y) const
{
    std::size_t index = getIndex(x, y);
    
    return m_tiles[index];
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

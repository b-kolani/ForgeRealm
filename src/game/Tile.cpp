#include "game/Tile.hpp"

Tile::Tile(TileType type):
    m_type(type)
{
}

TileType    Tile::getType() const
{
    return  m_type;
}

void    Tile::setType(TileType  type)
{
    m_type = type;
}

bool    Tile::isSolid() const
{
    return m_type != TileType::Air;
}
#include "graphics/WorldRender.hpp"
#include "game/World.hpp"
#include <iostream>

void    WorldRender::render(sf::RenderWindow& window,
                                const World& world)
{
    sf::RectangleShape  rectangle;

    rectangle.setSize(sf::Vector2f(
        World::TileSize,
        World::TileSize
    )); 

    for (std::size_t x = 0; x < world.getWidth(); ++x)
    {
        for (std::size_t y = 0; y < world.getHeight(); ++y)
        {
            const Tile&    tile = world.getTile(x, y);
            
            if (!tile.isSolid())
            {
                continue;
            }

            rectangle.setPosition({
                x * World::TileSize,
                y * World::TileSize
            });

            switch (tile.getType())
            {
                case TileType::Dirt:
                    rectangle.setFillColor(sf::Color(139, 69, 19));
                    break;
                
                case TileType::Stone:
                    rectangle.setFillColor(sf::Color(120, 120, 120));
                    break;

                case TileType::Grass:
                    rectangle.setFillColor(sf::Color::Green);
                    break;
                
                default:
                    break;
            }
  
            window.draw(rectangle);
        }
    }

}
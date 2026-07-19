#include "graphics/PlayerRenderer.hpp"
#include "game/Player.hpp"
#include <SFML/Graphics/RectangleShape.hpp>

void    PlayerRenderer::render(sf::RenderWindow& window,
    const Player& player)
{
    sf::RectangleShape  rectangle;

    rectangle.setSize(player.getSize());
    rectangle.setPosition(player.getPosition());
    rectangle.setFillColor(sf::Color::Red);

    window.draw(rectangle);
}

#include "game/Player.hpp"

Player::Player():
    m_position(100.f, 100.f),
    m_size(28.f, 28.f),
    m_speed(250.f)  
{}

void    Player::update(sf::Time deltaTime)
{}

void    Player::render(sf::RenderWindow& window)
{
    sf::RectangleShape  player;

    player.setSize(m_size);
    player.setPosition(m_position);

    player.setFillColor(sf::Color::Red);

    window.draw(player);
}

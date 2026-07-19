#include "game/Player.hpp"

Player::Player():
    m_position(100.f, 100.f),
    m_size(28.f, 28.f),
    m_speed(250.f)  
{}

void    Player::update(const Input& input, sf::Time deltaTime)
{
    sf::Vector2f    movement;

    if (input.isMovingLeft())
        movement.x -= 1;
    if (input.isMovingRight())
        movement.x += 1;
    if (input.isMovingUp())
        movement.y -= 1;
    if (input.isMovingDown())
        movement.y += 1;
    m_position += movement * m_speed * deltaTime.asSeconds();
}

const sf::Vector2f&  Player::getSize() const
{
    return m_size;
}

const sf::Vector2f& Player::getPosition() const 
{
    return  m_position;
}

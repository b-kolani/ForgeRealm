#include "core/Game.hpp"

Game::Game()
{
    m_player.setSize({50.f, 50.f});

    m_player.setFillColor(sf::Color::Green);

    m_player.setPosition(sf::Vector2f(100.f, 100.f));

}
void    Game::update()
{
    // ...
}

void    Game::render(sf::RenderWindow& window)
{
    window.draw(m_player);
}

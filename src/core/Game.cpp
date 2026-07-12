#include "core/Game.hpp"

Game::Game()
{
    // m_player.setSize({50.f, 50.f});
    // m_player.setFillColor(sf::Color::Green);
    // m_player.setPosition(sf::Vector2f(100.f, 100.f));

    m_camera.setSize({1280.f, 720.f});
    m_camera.setCenter({640.f, 360.f});
}

void Game::update(sf::Time deltaTime, const Input &input)
{
    m_player.update(deltaTime);
}

void Game::render(sf::RenderWindow &window)
{
    sf::RectangleShape  block;

    block.setSize({100.f, 100.f});
    block.setPosition(sf::Vector2f(1000.f, 100.f));
    
    window.setView(m_camera);
    m_player.render(window);
    window.draw(block);
}

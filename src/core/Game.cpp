#include "core/Game.hpp"

Game::Game():
    m_world(40, 25)
{
    // m_player.setSize({50.f, 50.f});
    // m_player.setFillColor(sf::Color::Green);
    // m_player.setPosition(sf::Vector2f(100.f, 100.f));

    // m_camera.setSize({1280.f, 720.f});
    // m_camera.setCenter({640.f, 360.f});
}

void Game::update(sf::Time deltaTime, const Input &input)
{
    m_world.update(deltaTime);

    m_player.update(input, deltaTime);
    
}

void Game::render(sf::RenderWindow &window)
{
    m_WorldRenderer.render(window, m_world);
    m_playerRenderer.render(window, m_player);
}

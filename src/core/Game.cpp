#include "core/Game.hpp"

Game::Game()
{
    m_player.setSize({50.f, 50.f});
    m_player.setFillColor(sf::Color::Green);
    m_player.setPosition(sf::Vector2f(100.f, 100.f));

    m_camera.setSize({1280.f, 720.f});
    m_camera.setCenter({640.f, 360.f});
}

void Game::update(sf::Time deltaTime, const Input &input)
{
    m_camera.setCenter(
        m_player.getPosition() +
        sf::Vector2f(25.f, 25.f));

    const float dt = deltaTime.asSeconds();

    if (input.isKeyPressed(sf::Keyboard::Key::A))
    {
        m_player.move(sf::Vector2f(-m_playerSpeed * dt, 0.f));
    }
    if (input.isKeyPressed(sf::Keyboard::Key::D))
    {
        m_player.move({m_playerSpeed * dt, 0.f});
    }
    if (input.isKeyPressed(sf::Keyboard::Key::W))
    {
        m_player.move(sf::Vector2f(0.f, -m_playerSpeed * dt));
    }
    if (input.isKeyPressed(sf::Keyboard::Key::S))
    {
        m_player.move({0.f, m_playerSpeed * dt});
    }
}

void Game::render(sf::RenderWindow &window)
{
    sf::RectangleShape  block;

    block.setSize({100.f, 100.f});
    block.setPosition(sf::Vector2f(1000.f, 100.f));
    
    window.setView(m_camera);
    window.draw(m_player);
    window.draw(block);
}

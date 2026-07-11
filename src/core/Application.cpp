#include "core/Application.hpp"

Application::Application() = default;

void    Application::run()
{
    while (m_window.isOpen())
    {
        // m_time.update();

        m_window.pollEvents();

        m_game.update();

        m_window.clear();

        m_game.render(m_window.getRenderWindow());

        m_window.display();
    }
}

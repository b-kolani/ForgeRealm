#include "core/Window.hpp"

Window::Window():
    m_window(sf::VideoMode(sf::Vector2u(1920, 780)), "ForgeRealm")
{
};

bool    Window::isOpen() const
{
    return m_window.isOpen();
}

void    Window::clear()
{
    m_window.clear();
}

void    Window::display()
{
    m_window.display();
}

void    Window::pollEvents()
{
    while (const std::optional event = m_window.pollEvent())
    {
        if (event->is<sf::Event::Closed>())
        {
            m_window.close();
        }
    }
}

sf::RenderWindow&   Window::getRenderWindow()
{
    return m_window;
}
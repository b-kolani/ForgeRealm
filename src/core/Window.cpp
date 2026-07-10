#include "include/core/Window.hpp"

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
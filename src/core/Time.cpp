#include "core/Time.hpp"

Time::Time():
m_deltaTime(sf::Time::Zero)
{
}

void    Time::update()
{
    m_deltaTime = m_clock.restart();
}

sf::Time    Time::deltaTime() const
{
    return m_deltaTime;
}

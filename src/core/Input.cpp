#include "core/Input.hpp"

// bool    Input::isKeyPressed(sf::Keyboard::Key key) const
// {
//     return sf::Keyboard::isKeyPressed(key);
// }

bool    Input::isMovingLeft() const
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A);
}

bool    Input::isMovingRight() const
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D);
}

bool    Input::isMovingUp() const
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W);
}

bool    Input::isMovingDown() const
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S);
}

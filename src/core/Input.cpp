#include "core/Input.hpp"

bool    Input::isKeyPressed(sf::Keyboard::Key key) const
{
    return sf::Keyboard::isKeyPressed(key);
}
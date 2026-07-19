#pragma once 

#include "SFML/Graphics.hpp"

class   Input
{
    public:
        // bool    isKeyPressed(sf::Keyboard::Key key) const;
        bool    isMovingLeft() const;
        bool    isMovingRight() const;
        bool    isMovingUp() const;
        bool    isMovingDown() const;
};

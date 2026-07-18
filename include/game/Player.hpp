#pragma once

#include <SFML/Graphics.hpp>
#include "math/Transform.hpp"

class   Player
{
    public:
                            Player();
        void                update(sf::Time deltaTime);
        void                render(sf::RenderWindow& window);
    
    private:
        // Transform           m_transform;
        sf::Vector2f        m_position;
        sf::Vector2f        m_size;
        // sf::RectangleShape  m_sprite;
        float               m_speed = 250.f;
};
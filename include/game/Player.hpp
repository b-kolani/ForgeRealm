#pragma once

#include <SFML/Graphics.hpp>
#include "math/Transform.hpp"
#include "core/Input.hpp"

class   Player
{
    public:
                            Player();
        void                update(const Input& input, sf::Time deltaTime);

        const sf::Vector2f& getSize() const;
        const sf::Vector2f& getPosition() const;
    
    private:
        sf::Vector2f        m_position;
        sf::Vector2f        m_size;
        float               m_speed = 250.f;
};
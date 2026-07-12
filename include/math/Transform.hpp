#pragma once

#include <SFML/Graphics.hpp>

class   Transform
{
    public:
                            Transform() = default;
        void                setPosition(const sf::Vector2f& position);
        const sf::Vector2f& getPosition() const;
        void                move(const sf::Vector2f& offset);
    
    private:
        sf::Vector2f        m_position;
};

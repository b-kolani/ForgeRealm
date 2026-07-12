#pragma once

#include <SFML/Graphics.hpp>

class   Entity
{
    public:
        virtual ~Entity() = default;
        virtual void    update(sf::Time deltaTime);
        virtual void    render(const sf::RenderWindow& window);
};
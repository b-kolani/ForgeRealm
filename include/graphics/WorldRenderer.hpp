#pragma once

#include <SFML/Graphics.hpp>

class   World;

class   WorldRenderer
{
    public:
        void    render(sf::RenderWindow& window,
                                const World& World);
};

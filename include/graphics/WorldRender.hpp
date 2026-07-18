#pragma once

#include <SFML/Graphics.hpp>

class   World;

class   WorldRender
{
    public:
        void    render(sf::RenderWindow& window,
                                const World& World);
};

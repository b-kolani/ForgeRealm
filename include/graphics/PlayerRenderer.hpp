#pragma once

#include <SFML/Graphics/RenderWindow.hpp>

class   Player;

class   PlayerRenderer
{
    public:
        void    render(sf::RenderWindow& window,
                const Player& player);
};

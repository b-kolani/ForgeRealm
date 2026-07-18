#include <iostream>
#include <map>
// #include <SFML/Graphics.hpp>

int main()
{
    srand(time(NULL));
    std::string s = "Hello, World";
    // sf::RectangleShape rec;
    // rec.setPosition(
    //     sf::Vector2f(100, 200)
    // );
    int randNum = rand() % 3;
    std::cout << randNum << std::endl;
    return 0;
}
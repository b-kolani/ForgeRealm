#pragma once
#include <SFML/Graphics.hpp>

class	Time
{
	public:
					Time();
		void		update();
		sf::Time	deltaTime() const;
	
	private:
		sf::Clock	m_clock;
		sf::Time	m_deltaTime;
};



#pragma once

#include <SFML/Graphics.hpp>

class	Window
{
	public:
				Window();

		bool	isOpen() const;

		void	processEvents();

		void	clear();

		void	display();
	
	private:
		sf::RenderWindow	m_window;
};
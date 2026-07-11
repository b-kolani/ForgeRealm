#pragma once


#include	"core/Window.hpp"
#include "core/Game.hpp"
#include "core/Time.hpp"

class   Application
{
	public:
				Application();
		
		void	run();
	
	private:

		Window	m_window;

		Game	m_game;
		
		Time	m_time;
};

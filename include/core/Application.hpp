#pragma once


#include "core/Time.hpp"
#include "core/Input.hpp"
#include "core/Game.hpp"
#include "core/Window.hpp"

class   Application
{
	public:
				Application();
		void	run();
	
	private:
		Window	m_window;
		Game	m_game;
		Time	m_time;
		Input	m_input;	
};

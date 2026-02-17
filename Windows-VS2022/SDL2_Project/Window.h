#pragma once
#include "SDL2_Common.h"	
class Window
{
public:
	Window();//constructor

	~Window();//destructor	
	static const unsigned int WINDOW_WIDTH = 800;
	static const unsigned int WINDOW_HEIGHT = 600;
	SDL_Window* getWindow();
private:
	SDL_Window* window;
};
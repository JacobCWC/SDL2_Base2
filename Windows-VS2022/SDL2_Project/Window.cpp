#include "Window.h"

Window::Window()
{
	window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
}

Window::~Window()
{
}

SDL_Window* Window::getWindow()
{
	return window;
}

#pragma once
#include "SDL2_Common.h"
class Renderer
{
public:
	Renderer();//constructor

	~Renderer();//destructor	

	void InitRenderer(SDL_Window* window);
private:
	SDL_Renderer* renderer;
};
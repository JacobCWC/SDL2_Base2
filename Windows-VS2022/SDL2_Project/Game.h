#pragma once
#include "SDL2_Common.h"
#include "Window.h"
#include "Renderer.h"
class Game
{
public:
	Game();//constructor

	~Game();//destructor	
	void gameInit();
	void setupGameState();
	void RunGameLoop();
private:
	void RunGameLoopOnce();
	Window* window;
	Renderer* renderer;
};
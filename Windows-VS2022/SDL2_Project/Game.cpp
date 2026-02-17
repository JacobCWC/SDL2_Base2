#include "Game.h"
#include "Window.h"
#include "Renderer.h"
#include "SDL2_Common.h"
Game::Game()
{
	window = nullptr;
	renderer = nullptr;
}

Game::~Game()
{
	delete window;
	delete renderer;
	window = nullptr;
	renderer = nullptr;
}

void Game::gameInit()
{
	window = new Window();	
	renderer = new Renderer();	
	if (window->getWindow() == nullptr)
	{
		SDL_Log("Failed to create window: %s", SDL_GetError());
		return;
	}	
}

void Game::setupGameState()
{
}

void Game::RunGameLoop()
{
}

void Game::RunGameLoopOnce()
{
}

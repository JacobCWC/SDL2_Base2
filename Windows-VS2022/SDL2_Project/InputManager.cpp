#include "SDL2_Common.h"
#include "InputManager.h"
#include "Timing.h"

InputManager::InputManager()
{
	quit = false;
	keyboardState = SDL_GetKeyboardState(NULL);
}

float InputManager::getHorizontalInput()
{
	return 0.0f;
}

float InputManager::getVerticalInput()
{
	return 0.0f;
}

bool InputManager::isWindowClosedEvent()
{
	return false;
}

void InputManager::update()
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			quit = true;
			break;
		}
	}
}

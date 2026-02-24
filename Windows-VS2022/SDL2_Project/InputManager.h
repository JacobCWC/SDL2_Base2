#pragma once
#include "SDL2_Common.h"

#include <memory>

class InputManager
{
private:
	InputManager();//constructor
	const Uint8* keyboardState;
	bool quit;
public:

	/* Alternative Singlton pattern using shared_ptr */
	static std::shared_ptr<InputManager> instance()
	{
		static std::shared_ptr<InputManager> inputmanager(new InputManager());
		return inputmanager;
	}
	
	float getHorizontalInput();
	float getVerticalInput();
	bool isWindowClosedEvent();
	void update();
	~InputManager();//destructor	

};
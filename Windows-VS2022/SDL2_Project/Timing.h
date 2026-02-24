#pragma once
#include "SDL2_Common.h"
#include <memory>
class Timing
{
private:
	Timing();//constructor

	float deltaTime;
public:
	/* Alternative Singlton pattern using shared_ptr */
	static std::shared_ptr<Timing> instance()
	{
		static std::shared_ptr<Timing> timing(new Timing());
		return timing;
	}


	~Timing();//destructor	

	float getDeltaTime();
	void update();
	void init();


};
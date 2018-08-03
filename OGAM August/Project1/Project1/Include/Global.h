#ifndef GLOBAL
#define GLOBAL

#include "Xbox360Controller.h"

#include <SFML/Graphics.hpp>
#include <iostream>


struct GlobalSettings
{
	const static unsigned int s_Height{ 720 };
	const static unsigned int s_Width{ 1280 };

	float s_Grav;

};



#endif // !GLOBAL


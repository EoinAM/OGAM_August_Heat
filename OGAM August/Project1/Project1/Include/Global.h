#ifndef GLOBAL
#define GLOBAL

#include "Xbox360Controller.h"

#include <SFML/Graphics.hpp>
#include <iostream>


struct GlobalSettings
{
public:
	const static unsigned int s_Height{ 720 };
	const static unsigned int s_Width{ 1280 };

	const static unsigned int s_Ground{ 600 };


	static double s_Grav;

	static void applyGrav(sf::Vector2f &t_pos, double t_dt);

};



#endif // !GLOBAL


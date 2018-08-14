#include "Global.h"

double GlobalSettings::s_Grav = .0001;

void GlobalSettings::applyGrav(sf::Vector2f &t_vel, double t_dt)
{
	t_vel.y += s_Grav * t_dt;
}

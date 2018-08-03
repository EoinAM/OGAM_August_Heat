#include "Player.h"

Player::Player(const sf::Vector2f t_size, const sf::Vector2f t_pos, Xbox360Controller & t_controller) :
	m_controller(t_controller)
{
}

Player::~Player()
{
}

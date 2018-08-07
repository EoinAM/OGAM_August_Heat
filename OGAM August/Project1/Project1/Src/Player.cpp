#include "Player.h"

Player::Player(const sf::Vector2f t_size, const sf::Vector2f t_pos, Xbox360Controller & t_controller) :
	m_controller(t_controller), m_position(t_pos),m_size(t_size)
{
	m_body.setSize(m_size);
	m_body.setFillColor(sf::Color::Red);
	m_body.setPosition(m_position);

	m_startVelocity = m_velocity;
}

Player::~Player()
{
}

void Player::update(double t_dt)
{

	if (m_state != PlayerState::JUMP)
	{
		m_preJumpPosition.y = m_position.y;
	}

	GlobalSettings::applyGrav(m_velocity, t_dt);

	move(t_dt);
}

void Player::setTexture(sf::Texture & t_texture)
{
	m_body.setTexture(&t_texture);
}

void Player::render(sf::RenderWindow & t_window)
{
	t_window.draw(m_body);
}

void Player::move(double t_dt)
{
	if (m_controller.m_currentState.DpadRight || m_controller.m_currentState.LeftThumbStick.x > 15)
	{
		m_position.x += m_velocity.x / t_dt;
	}
	else if (m_controller.m_currentState.DpadLeft || m_controller.m_currentState.LeftThumbStick.x < -15)
	{
		m_position.x -= m_velocity.x / t_dt;
	}

	if (m_controller.m_currentState.A && !m_jumping)
	{
		m_jumping = true;
		m_position.y -= m_velocity.y;
	}


	m_body.setPosition(m_position);
}

void Player::shoot()
{
}

void Player::run()
{
}

void Player::die()
{
}

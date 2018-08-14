#include "Platform.h"

Platform::Platform(sf::Vector2f t_pos, sf::Vector2f t_size, bool t_isDrawn ) :
	m_position(t_pos),
	m_size(t_size)
{
}

Platform::~Platform()
{
}

void Platform::init(sf::Vector2f t_pos, sf::Vector2f t_size)
{
}

void Platform::setTexture(sf::Texture & t_texture)
{
	m_body.setTexture(&t_texture);
}

void Platform::update(double t_dt)
{
}

void Platform::render(sf::RenderWindow & t_window)
{
	t_window.draw(m_body);
}

void Platform::move()
{
}

void Platform::melt()
{
}

void Platform::freeze()
{
}

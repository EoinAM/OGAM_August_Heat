#ifndef PLATFORM
#define PLATFORM

#include "Global.h"

class Platform
{
	//functions
public:
	Platform(sf::Vector2f = sf::Vector2f(), sf::Vector2f = sf::Vector2f(), bool = bool()); //Position, Size, IsDrawn
	~Platform();

	void init(sf::Vector2f t_pos, sf::Vector2f t_size);
	void setTexture(sf::Texture & t_texture);

	////functions
protected:
	void update(double t_dt);
	void render(sf::RenderWindow & t_window);
	void move();
	void melt();
	void freeze();
	//Variable
public:
	sf::RectangleShape m_body;
	

	//Variable
protected:
	bool m_isDrawn{ true };
	bool m_isFrozen{ false };
	bool m_canBurn{ false };

	sf::Vector2f m_position{ 0, 0 };
	sf::Vector2f m_size{ 0,0 };
	sf::Texture m_texture;
	sf::Sprite m_sprite;

};

#endif //!PLATFORM


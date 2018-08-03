#ifndef PLAYER

#include "Global.h"

enum class PlayerType
{
	FIRE, ICE
};

enum class PlayerState
{
	DEAD, ALIVE
};

class Player
{
	//Public Functions
public:
	Player(const sf::Vector2f t_size, const sf::Vector2f t_pos, Xbox360Controller& t_controller, const float t_grav);
	~Player();

	void update(double t_dt);
	void setTexture(sf::Texture& t_texture);

	//Private Functions
protected:
	void move();
	void shoot();
	void run();
	void die();

	//Public variables
public:


	//Private Variables
protected:
	sf::Vector2f m_size;
	sf::Sprite m_bodySprite;
	sf::Texture m_bodyTexture;
	Xbox360Controller & m_controller;
};


#endif // !PLAYER

#ifndef PLAYER

#include "Global.h"

enum class PlayerType
{
	FIRE, ICE
};

enum class PlayerState
{
	DEAD, ALIVE, JUMP, FALLING
};

class Player
{
	//Public Functions
public:
	Player(const sf::Vector2f , const sf::Vector2f , Xbox360Controller& ); // Size, Position, Controller
	~Player();

	void update(double t_dt);
	void setTexture(sf::Texture& t_texture);
	sf::Vector2f const getPosition();
	sf::RectangleShape const getBody();
	void render(sf::RenderWindow & t_window);
	//Private Functions
protected:
	void move(double t_dt);
	void shoot();
	void run();
	void die();

	void borderCheck();
	//Public variables
public:


	//Private Variables
protected:
	sf::RectangleShape m_body;

	sf::Vector2f m_preJumpPosition;
	sf::Vector2f m_startVelocity;
	sf::Vector2f m_velocity{ 1.0f, .5f };
	sf::Vector2f m_position{ 0,0 };
	sf::Vector2f m_size{ 0,0 };
	
	sf::Sprite m_bodySprite;
	sf::Texture m_bodyTexture;

	bool m_jumping{ false };
	bool m_falling{ false };

	float m_jumpHeight{ 10 };

	Xbox360Controller & m_controller;

	PlayerState m_state{ PlayerState::ALIVE };
};


#endif // !PLAYER

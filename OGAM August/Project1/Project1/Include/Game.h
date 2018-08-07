#ifndef GAME
#define GAME

#include "Global.h"
#include "Player.h"

enum class GameState
{
	MAINMENU,
	OPTIONS,
	PLAYING,
	ENDSCREE
};

class Game
{
	//public Functions
public:
	Game();
	~Game();

	void run();

	//private Functions
protected:
	void update(double t_dt);
	void render();
	void loadResources();
	void processEvents();
	void processGameEvents(sf::Event& t_event);

	//public Variables
public:
	GameState m_currentScreen{ GameState::PLAYING };
	Xbox360Controller m_controller;

	const double GRAVITY{ 9.8 };

	//protected variables
protected:
	sf::RenderWindow m_window;
	Player m_player;
	
};

#endif // !GAME
#ifndef GAME
#define GAME

#include "Global.h"

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
	void processEvents();
	void processGameEvents(sf::Event& t_event);

	//public Variables
public:


	//Private Variables
protected:
	sf::RenderWindow m_window;
	
};

#endif // !GAME
#include "Game.h"
static double const MS_PER_UPDATE = 10.0F;

Game::Game()
	: m_window(sf::VideoMode(GlobalSettings::s_Width,GlobalSettings::s_Height, 32), "One Game A Month", sf::Style::Default)
{
	m_window.setVerticalSyncEnabled(true);
}

Game::~Game()
{
}

void Game::run()
{
	sf::Clock clock;
	sf::Int32 lag = 0;

	while (m_window.isOpen())
	{
		sf::Time dt = clock.restart();

		lag += dt.asMilliseconds();
		processEvents();

		while (lag >= MS_PER_UPDATE)
		{
			update(MS_PER_UPDATE);
			lag -= MS_PER_UPDATE;
		}
		update(MS_PER_UPDATE);

		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
		processGameEvents(event);
	}
}

void Game::processGameEvents(sf::Event & t_event)
{
}

void Game::update(double t_dt)
{
}

void Game::render()
{
	m_window.clear(sf::Color::Blue);
	m_window.display();
}

#include "Game.h"
static double const MS_PER_UPDATE = 10.0F;

Game::Game()
	: m_window(sf::VideoMode(GlobalSettings::s_Width,GlobalSettings::s_Height, 32), "One Game A Month", sf::Style::Default),
	m_player(sf::Vector2f(50.0f,50.0f), sf::Vector2f(10.0f,400.0f), m_controller)
{
	
	m_controller.connect();
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

		lag += dt.asSeconds();
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
	if (m_controller.isConnected())
	{
		m_controller.update();
	}

	switch (m_currentScreen)
	{
	case GameState::MAINMENU:
		break;
	case GameState::OPTIONS:
		break;
	case GameState::PLAYING:
		m_player.update(t_dt);
		break;
	case GameState::ENDSCREE:
		break;
	default:
		break;
	}
}

void Game::render()
{
	m_window.clear(sf::Color::Blue);
	m_player.render(m_window);
	m_window.display();
}

void Game::loadResources()
{
}

#include <SFML/Window.hpp>
#include <iostream>

#include "Game.h"
#include "Player.h"

int main()
{
	std::cout << "Hello, World!" << std::endl;

	constexpr unsigned WINDOW_WIDTH = 960;
	constexpr unsigned WINDOW_HEIGHT = 720;

	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML Fighting Game");

	// Player player({ WINDOW_WIDTH / 2.f, WINDOW_HEIGHT / 2.f });

	Game game;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		game.Update();

		game.Render(window);

		window.display();
	}

	return 0;
}

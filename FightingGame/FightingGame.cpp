#include <SFML/Window.hpp>
#include <iostream>

#include "Player.h"

int main()
{
	std::cout << "Hello, World!" << std::endl;

	constexpr unsigned WINDOW_WIDTH = 960;
	constexpr unsigned WINDOW_HEIGHT = 720;


	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML Fighting Game");

	Player player({ WINDOW_WIDTH / 2.f, WINDOW_HEIGHT / 2.f });

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// TODO: Use a clock
		const float deltaTime = 0.f;

		window.clear();

		player.Update(deltaTime);

		player.Render(window);

		window.display();
	}

	return 0;
}

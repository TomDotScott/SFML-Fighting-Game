#include <SFML/Window.hpp>
#include <iostream>

#include "Game.h"
#include "Keyboard.h"
#include "Player.h"

int main()
{
	std::cout << "Hello, World!" << std::endl;

	constexpr unsigned WINDOW_WIDTH = 960;
	constexpr unsigned WINDOW_HEIGHT = 720;

	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML Fighting Game", sf::Style::Titlebar | sf::Style::Close);

	Game game(WINDOW_WIDTH, WINDOW_HEIGHT);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		Keyboard::Update();

		if (Keyboard::IsButtonPressed(sf::Keyboard::Key::T))
		{
			printf("T IS PRESSED\n");
		}

		if (Keyboard::IsButtonReleased(sf::Keyboard::Key::T))
		{
			printf("T IS RELEASED\n");
		}

		if (Keyboard::IsButtonDown(sf::Keyboard::Key::R))
		{
			printf("R IS DOWN\n");
		}

		window.clear();

		game.Update();

		game.Render(window);

		window.display();
	}

	return 0;
}

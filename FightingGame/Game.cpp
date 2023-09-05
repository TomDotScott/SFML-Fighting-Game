#include "Game.h"

#include <iostream>

#include "Clock.h"

void Game::Update()
{
	Clock::Get().Update();

	static float counter = 0.f;

	counter += Clock::Get().DeltaTime();

	std::cout << counter << std::endl;
}

void Game::Render(sf::RenderWindow& window)
{
}

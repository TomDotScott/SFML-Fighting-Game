#include "Game.h"

#include <iostream>

#include "Clock.h"

Game::Game(const int windowWidth, const int windowHeight) :
	m_player({ static_cast<float>(windowWidth) / 2.f, static_cast<float>(windowHeight) / 2.f })
{

}

void Game::Update()
{
	Clock::Get().Update();
	const float deltaTime = Clock::Get().DeltaTime();

	m_player.Update(deltaTime);
}

void Game::Render(sf::RenderWindow& window)
{
	m_player.Render(window);
}

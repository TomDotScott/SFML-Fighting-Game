#pragma once
#include <SFML/Graphics/RenderWindow.hpp>

#include "Player.h"

class Game
{
public:
	Game(int windowWidth, int windowHeight);

	void Update();
	void Render(sf::RenderWindow& window);

private:
	Player m_player;
};

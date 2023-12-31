﻿#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Player
{
public:
	Player(const sf::Vector2f& position);
	void Update(float deltaTime);
	void Render(sf::RenderWindow& window);

private:
	sf::Vector2f m_position;
	sf::Vector2f m_velocity;
	sf::RectangleShape m_sprite;
	float m_speed;

	void HandleInput();
};

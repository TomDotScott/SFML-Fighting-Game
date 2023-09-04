#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Player
{
public:
	Player(const sf::Vector2f& position);
	void Update(const float deltaTime);
	void Render(sf::RenderWindow& window);

private:
	sf::Vector2f m_position;
	sf::Vector2f m_velocity;
	sf::RectangleShape m_sprite;
};

#include "Player.h"

Player::Player(const sf::Vector2f& position) :
	m_position(position),
	m_sprite({ 25.f, 25.f })
{
	m_sprite.setFillColor(sf::Color::White);
	m_sprite.setOutlineColor(sf::Color::Red);
	m_sprite.setOutlineThickness(m_sprite.getSize().x / 5.f);
}

void Player::Update(const float deltaTime)
{
}

void Player::Render(sf::RenderWindow& window)
{
	m_sprite.setPosition(m_position);
	window.draw(m_sprite);
}

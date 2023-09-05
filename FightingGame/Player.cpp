#include "Player.h"

#include "Keyboard.h"

Player::Player(const sf::Vector2f& position) :
	m_position(position),
	m_sprite({ 25.f, 25.f }),
	m_speed(250.f)
{
	m_sprite.setFillColor(sf::Color::White);
	m_sprite.setOutlineColor(sf::Color::Red);
	m_sprite.setOutlineThickness(m_sprite.getSize().x / 5.f);
}

void Player::Update(const float deltaTime)
{
	m_velocity = { 0.f, 0.f };

	HandleInput();

	m_position += m_velocity * deltaTime;
}

void Player::Render(sf::RenderWindow& window)
{
	m_sprite.setPosition(m_position);
	window.draw(m_sprite);
}

void Player::HandleInput()
{
	if (Keyboard::IsButtonDown(sf::Keyboard::A))
	{
		m_velocity.x += -m_speed;
	}


	if (Keyboard::IsButtonDown(sf::Keyboard::D))
	{
		m_velocity.x += m_speed;
	}

	// TODO: Make this the jump button
	if (Keyboard::IsButtonDown(sf::Keyboard::W))
	{
		m_velocity.y += -m_speed;
	}

	// TODO: Make this fast fall
	if (Keyboard::IsButtonDown(sf::Keyboard::S))
	{
		m_velocity.y += m_speed;
	}
}

#pragma once
#include <array>
#include <SFML/Window/Keyboard.hpp>

class Keyboard
{
public:
	static void Update();
	static bool IsButtonPressed(sf::Keyboard::Key key);
	static bool IsButtonDown(sf::Keyboard::Key key);
	static bool IsButtonReleased(sf::Keyboard::Key key);

private:
	// True the first frame the button is pressed
	static std::array<bool, sf::Keyboard::Key::KeyCount> m_pressedButtons;

	// True whilst the buttons are pressed
	static std::array<bool, sf::Keyboard::Key::KeyCount> m_downButtons;

	// True the frame the buttons are released
	static std::array<bool, sf::Keyboard::Key::KeyCount> m_releasedButtons;
};

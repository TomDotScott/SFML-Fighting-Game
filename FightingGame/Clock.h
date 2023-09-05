#pragma once
#include <chrono>

class Clock
{
	friend class Game;

public:
	static Clock& Get();

	float DeltaTime() const;

private:
	Clock();
	void Update();

	std::chrono::high_resolution_clock::time_point m_timeLastUpdate;
	std::chrono::high_resolution_clock::duration m_delta;
};

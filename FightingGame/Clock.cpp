#include "Clock.h"

#include <iostream>

Clock& Clock::Get()
{
	static Clock* instance = nullptr;

	if (instance == nullptr)
	{
		instance = new Clock();
	}

	return *instance;
}

float Clock::DeltaTime() const
{
	return m_delta.count() / powf(10.f, 9.f);
}

Clock::Clock() :
	m_timeLastUpdate(std::chrono::high_resolution_clock::now()),
	m_delta()
{
}

void Clock::Update()
{
	const std::chrono::high_resolution_clock::time_point currentTime = std::chrono::high_resolution_clock::now();
	m_delta = currentTime - m_timeLastUpdate;

	// std::cout << m_delta.count() << std::endl;

	m_timeLastUpdate = currentTime;
}

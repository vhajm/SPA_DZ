#include <SFML/Graphics.hpp>
#include "Cvijet.h"

using namespace sf;


int main()
{
	RenderWindow window(VideoMode(800, 600), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	//*******NISAM ZNAO BOLJE OD OVOGA, TJ NISAM ZNAO NAPRAVITI U FUNKCIJI DRAW****//
	//*******OVO JE NERED, NAS PRIJATELJ STACK OVERFLOW, ALI RADI****//
	CircleShape circle(10.f);
	circle.setFillColor(sf::Color::Yellow);
	circle.setOrigin(circle.getRadius(), circle.getRadius());
	circle.setPosition(50, 50);

	double max_radius = 20.f;
	double min_radius = 15.f;
	double radius_step = 0.1f;
	double current_radius = min_radius;
	bool growing = true;

	//*******************************************************************************//

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		//*******KAO I OVO OVDJE****//

		if (growing)
		{
			current_radius += radius_step;
			if (current_radius >= max_radius)
			{
				current_radius = max_radius;
				growing = false;
			}
		}
		else
		{
			current_radius -= radius_step;
			if (current_radius <= min_radius)
			{
				current_radius = min_radius;
				growing = true;
			}
		}

		circle.setRadius(current_radius);
		circle.setOrigin(current_radius, current_radius);

		//*******************************************************************************//

		window.clear();
		cvijet.draw();
		window.draw(circle);
		window.display();
	}

	return 0;
}


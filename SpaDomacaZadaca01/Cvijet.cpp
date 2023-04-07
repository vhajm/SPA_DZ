#include <SFML/Graphics.hpp>
#include "Cvijet.h"


using namespace sf;

Cvijet::Cvijet(RenderWindow* w)
{
	this->window = w;
}

void Cvijet::make_frame()
{
	RectangleShape lineL(Vector2f(400.f, 5.f));
	lineL.setPosition(20, 5);
	lineL.rotate(90);
	window->draw(lineL);

	RectangleShape lineR(Vector2f(400.f, 5.f));
	lineR.setPosition(400, 5);
	lineR.rotate(90);
	window->draw(lineR);

	RectangleShape lineUp(Vector2f(380.f, 5.f));
	lineUp.setPosition(20, 5);
	lineUp.rotate(0);
	window->draw(lineUp);

	RectangleShape lineDo(Vector2f(380.f, 5.f));
	lineDo.setPosition(20, 400);
	lineDo.rotate(0);
	window->draw(lineDo);
}

void Cvijet::make_shape()
{
	CircleShape shape(50.f, 7);
	shape.setPosition(100, 100);
	shape.setOutlineThickness(20.f);
	shape.setOutlineColor(Color(255, 0, 0));
	shape.setFillColor(Color(255, 255, 0));
	window->draw(shape);
	
}

void Cvijet::make_line()
{
	RectangleShape line(Vector2f(150.f, 5.f));
	line.setPosition(152, 215);
	line.rotate(90);
	line.setFillColor(Color(0, 255, 0));
	window->draw(line);

	RectangleShape lines0(Vector2f(150.f, 1.f));
	lines0.setPosition(170, 295);
	lines0.rotate(-20);
	lines0.setFillColor(Color(0, 0, 0));
	window->draw(lines0);

	RectangleShape lines1(Vector2f(30.f, 1.f));
	lines1.setPosition(170, 295);
	lines1.rotate(-46);
	lines1.setFillColor(Color(0, 0, 0));
	window->draw(lines1);

	RectangleShape lines2(Vector2f(30.f, 1.f));
	lines2.setPosition(230, 273);
	lines2.rotate(-46);
	lines2.setFillColor(Color(0, 0, 0));
	window->draw(lines2);

	RectangleShape lines3(Vector2f(30.f, 1.f));
	lines3.setPosition(170, 295);
	lines3.rotate(5);
	lines3.setFillColor(Color(0, 0, 0));
	window->draw(lines3);

	RectangleShape lines4(Vector2f(30.f, 1.f));
	lines4.setPosition(230, 273);
	lines4.rotate(5);
	lines4.setFillColor(Color(0, 0, 0));
	window->draw(lines4);
}

void Cvijet::make_convex()
{
	ConvexShape convex;
	convex.setPointCount(4);
	convex.setPoint(0, Vector2f(150.f, 300.f));
	convex.setPoint(1, Vector2f(200.f, 260.f));
	convex.setPoint(2, Vector2f(350.f, 230.f));
	convex.setPoint(3, Vector2f(210.f, 305.f));
	convex.setFillColor(Color(0, 255, 0));
	window->draw(convex);
}

void Cvijet::draw()
{
	make_frame();
	make_shape();
	make_convex();
	make_line();
}

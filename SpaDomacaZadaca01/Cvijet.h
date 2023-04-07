#pragma once

using namespace sf;

class Cvijet
{
private:
	RenderWindow* window;
	
public:
	Cvijet(RenderWindow* w);
	void make_frame();
	void make_shape();
	void make_line();
	void make_convex();
	void draw();
};


#include "sierpinski.h"

sierpinski::sierpinski() {
	posx = 0;
	posy = 0;
	vertex[0][0] = 0;
	vertex[0][1] = height - 2;
	vertex[1][0] = (width - 2) / 2;
	vertex[1][1] = 0;
	vertex[2][0] = width - 2;
	vertex[2][1] = height - 2;
}

void sierpinski::init(int x, int y) {
	posx = x;
	posy = y;
	sf::RectangleShape dot;
	for (auto &i : vertex) {
		dot.setSize(sf::Vector2f(10, 10));
		dot.setFillColor(sf::Color::Red);
		dot.setPosition(sf::Vector2f(i[0] - 5, i[1] - 5));
		window.draw(dot);
	}
}

void sierpinski::step() {
	int v = randInt(0, 3);
	posx = abs(vertex[v][0] + posx) / 2.f;
	posy = abs(vertex[v][1] + posy) / 2.f;
}

float sierpinski::x() {
	return posx;
}

float sierpinski::y() {
	return posy;
}

sf::Color sierpinski::color() {
	return col;
}
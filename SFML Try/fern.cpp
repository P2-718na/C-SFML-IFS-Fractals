#include "fern.h"

fern::fern() {
	posx = 0.f;
	posy = 0.f;
}

void fern::init(int x, int y) {
	posx = 0;
	posy = 0;
	return;
}

void fern::step() {
	int num = randInt(0, 100);
	int set = 0;
	if (num == 0)
		set = 0;
	else if (0 < num  && num <= 7)
		set = 3;
	else if (7 < num && num <= 14)
		set = 2;
	else
		set = 1;
	transform(set, posx, posy);
}

double fern::x() {
	return posx * 80 + width / 2;
}

double fern::y() {
	return posy * 80;
}

sf::Color fern::color() {
	return col;
}

void fern::transform(int set, double& x, double& y) {
	double tmp;
	switch (set) {
	case 0:
		x = 0.f;
		y = y * 0.16;
		break;
	case 1:
		tmp = x;
		x = x * 0.85 - 0.04 * y;
		y = tmp * -0.04 + 0.85 * y + 1.6;
		break;
	case 2:
		tmp = x;
		x = x * 0.2 - 0.26 * y;
		y = tmp * 0.23 + 0.22 * y + 1.6;
		break;
	case 3:
		tmp = x;
		x = x * -0.15 + 0.28 * y;
		y = tmp * 0.26 + 0.24 * y + 0.44;
		break;
	default:
		break;
	}
}
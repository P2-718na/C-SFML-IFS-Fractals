#include "maple.h"

maple::maple() {
	posx = 0.f;
	posy = 0.f;
}

void maple::init(int x, int y) {
	posx = 0;
	posy = 0;
	return;
}

void maple::step() {
	int num = randInt(0, 100);
	int set = 0;
	if (num < 10)
		set = 0;
	else if (10 <= num  && num < 45)
		set = 1;
	else if (45 <= num && num < 80)
		set = 2;
	else
		set = 3;
	transform(set, posx, posy);
}

double maple::x() {
	return posx * 200 + width / 2;
}

double maple::y() {
	return posy * 200 + 800;
}

sf::Color maple::color() {
	return col;
}

void maple::transform(int set, double& x, double& y) {
	double tmp;
	switch (set) {
	case 0:
		tmp = x;
		x = 0.14 * x + 0.01 * y - 0.08;
		y = 0.51 * y - 1.31;
		break;
	case 1:
		tmp = x;
		x = x * 0.43 + 0.52 * y + 1.49;
		y = tmp * -0.45 + 0.50 * y + -0.75;
		break;
	case 2:
		tmp = x;
		x = x * 0.45 - 0.49 * y - 1.62;
		y = tmp * 0.47 + 0.47 * y - 0.74;
		break;
	case 3:
		tmp = x;
		x = x * 0.49 + 0.02;
		y = 0.51 * y + 0.20;
		break;
	default:
		break;
	}
}
#ifndef __MAPLE__
#define __MAPLE__
#include "tools.h"

class maple {
public:
	maple();
	void init(int x, int y);
	void step();
	double x();
	double y();
	sf::Color color();

private:
	double posx, posy;
	sf::Color col = sf::Color::Red;
	void transform(int set, double& x, double& y);
};
#endif
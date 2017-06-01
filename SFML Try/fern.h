#ifndef __FERN__
#define __FERN__
#include "tools.h"

class fern {
	public:
		fern();
		void init(int x, int y);
		void step();
		double x();
		double y();
		sf::Color color();
	
	private:
		double posx, posy;
		sf::Color col = sf::Color::Green;
		void transform(int set, double& x, double& y);
};
#endif
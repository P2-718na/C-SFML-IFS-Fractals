#ifndef __SIERPINSKI__
#define __SIERPINSKI__
#include "tools.h"

class sierpinski {
	public:
		sierpinski();
		
		void init(int x, int y);
		void step();
		float x();
		float y();
		sf::Color color();

	private:
		float posx, posy;
		float vertex[3][2];
		sf::Color col = sf::Color::White;
};

#endif
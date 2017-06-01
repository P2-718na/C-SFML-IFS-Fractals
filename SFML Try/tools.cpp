#include "tools.h"

bool randInit = false;
int randInt(int min, int max) {
	if (!randInit) {
		std::srand(std::time(NULL));
		randInit = true;
	}
	return std::rand() % (max - min) + min; //Min compreso, max non compreso
}
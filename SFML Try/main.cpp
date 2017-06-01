#include "tools.h"

const int width = 1000 + 2;
const int height = 1000 + 2;
sf::RenderWindow window(sf::VideoMode(width, height), "Fractals", sf::Style::Default, sf::ContextSettings(1, 1, 4, 1, 1, 0, true));


int main() {
	int loop = 0; //0 = first run, 1 = running, 2 = paused

	sf::RectangleShape vertex;
	vertex.setSize(sf::Vector2f(1, 1));

	window.clear(sf::Color::Black);
	window.display();

	maple fractal;
	int i = 0;
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::L)
				loop = (loop != 1) ? 2 : 1;
			if (event.type == sf::Event::MouseButtonPressed) {
				float x = sf::Mouse::getPosition(window).x;
				float y = sf::Mouse::getPosition(window).y;
				fractal.init(x, y);
				vertex.setFillColor(fractal.color());
				loop = 1;
			}
			
		}
		
		if (loop == 1) {
			window.display();
			fractal.step();
			vertex.setPosition(fractal.x(), fractal.y());
			window.draw(vertex);
		}
	}

	return 0;
}
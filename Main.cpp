#include "Application.h"

int main() {
	Application app("Pong", 800, 800);
	app.capFPS(60);

	while (app.isOpen()) {
		sf::Event e;
		while (app.pollEvent(e)) {
			if (e.type == sf::Event::Closed) {
				app.close();
			}
		}
		app.fill(sf::Color::Black);
		app.display();
	}
}

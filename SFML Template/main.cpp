#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main() {
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Awesome SFML!:)");
	
	while (window.isOpen()) {
		// handle events

		// update game logic

		// draw
		window.clear();


		// draw SFML objects
		window.display();
		cout << "HU!!";
	}
	//return 0;
	return EXIT_SUCCESS;
}
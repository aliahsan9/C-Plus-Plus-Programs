
#include <iostream>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Car Racing Game");

    // Load a car texture
    sf::Texture carTexture;
    if (!carTexture.loadFromFile("car.png")) {
        std::cerr << "Error loading car texture!"<< std::endl;
        return -1;
    }

    //Create a sprite for the car
    sf::Sprite carSprite;
    carSprite.setTexture(carTexture);
    carSprite.setPosition(400, 500); // Start position

    // Game loop
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Handle input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            carSprite.move(-0.1f, 0.f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            carSprite.move(0.1f, 0.f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            carSprite.move(0.f, -0.1f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            carSprite.move(0.f, 0.1f);
        }

        // Clear the window
        window.clear();

        // Draw the car
        window.draw(carSprite);

        // Display the content of the window
        window.display();
    }

    return 0;
}

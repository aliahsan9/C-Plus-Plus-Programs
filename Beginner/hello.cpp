#include <SFML/Audio.hpp>
#include <iostream>

int main() {
    // Load an audio file
    sf::Music music;
    if (!music.openFromFile("path/to/your/music/file.ogg")) {
        std::cerr << "Error loading music file" << std::endl;
        return -1;
    }

    // Play the music
    music.play();

    // Keep the program running as long as the music is playing
    while (music.getStatus() == sf::Music::Playing) {
        // Leave some CPU time for other processes
        sf::sleep(sf::milliseconds(100));
    }

    return 0;
}

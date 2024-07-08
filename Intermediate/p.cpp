#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Array of picture filenames
    string pictures[] = {
        "picture1.jpg",
        "picture2.jpg",
        "picture3.jpg",
        "picture4.jpg",
        "picture5.jpg"
    };

    // Get the number of pictures
    int numPictures = sizeof(pictures) / sizeof(pictures[0]);

    // Generate a random index
    int randomIndex = rand() % numPictures;

    // Display the randomly selected picture filename
    cout << "Randomly selected picture: " << pictures[randomIndex] << endl;

    return 0;
}

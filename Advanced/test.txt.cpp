#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Adjust the following path to match the path to your desktop
    string path = "C:\\Users\\fast computers\\Desktop\\test.txt";

    ifstream infile(path);

    if (!infile) {
        cerr << "Error opening file at: " << path << endl;
        return 1;
    }

    string line;

    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();

    return 0;
}

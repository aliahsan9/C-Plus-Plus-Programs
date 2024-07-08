#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string path = "C:\\Users\\fast computers\\Desktop\\students.txt"; // Adjust the path as needed
    ifstream infile(path);

    if (!infile) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    string line;
    cout << "Records from the file:" << endl;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
    return 0;
}

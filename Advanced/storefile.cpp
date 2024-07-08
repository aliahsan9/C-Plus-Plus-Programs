#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    vector<char> characters(5); // Corrected the spacing

    string filepath = "c:\\users\\fast computers\\desktop\\char-file.txt";

    cout << "Enter 5 characters:" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Character " << i + 1 << ": ";
        cin >> characters[i];
    }

    ofstream outfile(filepath); // Added missing semicolon
    if (!outfile) {
        cerr << "Error opening file for writing at: " << filepath << endl;
        return 1;
    }

    for (const auto& ch : characters) { // Corrected the typo in "characters"
        outfile << ch << endl;
    }
    outfile.close();

    ifstream infile(filepath);
    if (!infile) {
        cerr << "Error opening file for reading at: " << filepath << endl; // Added missing closing quote and corrected string
        return 1;
    }

    cout << "The characters read from the file are:" << endl; // Corrected typo in the string
    char ch;

    while (infile >> ch) {
        cout << ch << endl;
    }

    infile.close();

    return 0;
}

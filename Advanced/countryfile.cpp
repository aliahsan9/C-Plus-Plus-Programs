#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Country {
    char name[50];
    char capital[50];
    int population;
};

int main() {
    Country country; 

    cout << "Enter the name of the country: ";
    cin.getline(country.name, 50);

    cout << "Enter the capital name of the country: ";
    cin.getline(country.capital, 50);

    cout << "Enter the population of the country: ";
    cin >> country.population;

    cin.ignore();

    string path = "C:\\Users\\fast computers\\Desktop\\country.txt";
    ofstream outfile(path, ios::binary);

    if (!outfile) {
        cerr << "Error opening the file!!" << endl;
        return 1;
    }

    outfile.write(reinterpret_cast<char*>(&country), sizeof(Country));
    outfile.close();

    cout << "The country information has been saved in the file: " << path << endl;

    return 0;
}

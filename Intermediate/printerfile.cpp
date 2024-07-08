#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void printToPrinter(const string& content) { 
    cout << "Sending the following content to the printer:\n" << content << endl;
}

int main() {
    string path = "C:\\Users\\fast computers\\Desktop\\country.txt";
    ifstream infile(path);

    if (!infile) {
        cerr << "Error opening the file!!" << endl;
        return 1;
    }

    string line;
    string content;
    while (getline(infile, line)) {
   
        cout << line << endl;

     
        content += line + "\n";
    }
    infile.close();

    
    printToPrinter(content);

    return 0;
}

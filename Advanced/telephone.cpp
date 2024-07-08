#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct Contact {
    string name;
    string phone;
};

const string DIRECTORY_PATH = "C:\\Users\\YourUsername\\Desktop\\directory.txt";

void addContact() {
    ofstream outFile(DIRECTORY_PATH, ios::app);  // Append mode
    if (!outFile) {
        cerr << "Error opening file at: " << DIRECTORY_PATH << endl;
        return;
    }

    Contact contact;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, contact.name);'''''''                                                                                                                                                                                                                                                                                                                                                                          
    cout << "Enter phone number: ";
    getline(cin, contact.phone);

    outFile << contact.name << "," << contact.phone << endl;
    outFile.close();
    cout << "Contact added successfully." << endl;
}

void displayContacts() {
    ifstream inFile(DIRECTORY_PATH);
    if (!inFile) {
        cerr << "Error opening file at: " << DIRECTORY_PATH << endl;
        return;
    }

    string line;
    cout << "Telephone Directory:" << endl;
    while (getline(inFile, line)) {
        stringstream ss(line);
        Contact contact;
        getline(ss, contact.name, ',');
        getline(ss, contact.phone, ',');
        cout << "Name: " << contact.name << ", Phone: " << contact.phone << endl;
    }

    inFile.close();
}

void searchContact() {
    ifstream inFile(DIRECTORY_PATH);
    if (!inFile) {
        cerr << "Error opening file at: " << DIRECTORY_PATH << endl;
        return;
    }

    string searchName;
    cout << "Enter name to search: ";
    cin.ignore();
    getline(cin, searchName);

    string line;
    bool found = false;
    while (getline(inFile, line)) {
        stringstream ss(line);
        Contact contact;
        getline(ss, contact.name, ',');
        getline(ss, contact.phone, ',');
        if (contact.name == searchName) {
            cout << "Name: " << contact.name << ", Phone: " << contact.phone << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }

    inFile.close();
}

void showMenu() {
    cout << "Telephone Directory Management System" << endl;
    cout << "1. Add Contact" << endl;
    cout << "2. Display Contacts" << endl;
    cout << "3. Search Contact" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    while (true) {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}






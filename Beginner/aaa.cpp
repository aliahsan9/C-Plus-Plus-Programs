#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor to initialize the string
    MyString(const string& s = "") : str(s) {}

    // Overloading the comparison operator ==
    bool operator==(const MyString& other) const {
        return str.length() == other.str.length();
    }

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    // Creating two MyString objects
    MyString s1("Hello");
    MyString s2("World");
    MyString s3("Hi");

    // Comparing the two MyString objects using the overloaded == operator
    cout << "Comparing s1 and s2: " << (s1 == s2) << endl; // Should output 1 (true)
    cout << "Comparing s1 and s3: " << (s1 == s3) << endl; // Should output 0 (false)

    return 0;
}

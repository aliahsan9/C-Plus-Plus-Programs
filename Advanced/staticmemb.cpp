#include <iostream>

using namespace std;

class Student {
private:
    static int nextRollNumber;  // Static member to generate unique roll numbers
    int rollNumber;  // Instance member to hold the roll number of each student

public:
    // Constructor to assign a unique roll number to each student
    Student() {
        rollNumber = nextRollNumber++;
    }

    // Function to display the roll number of the student
    void displayRollNumber() const {
        cout << "Roll Number: " << rollNumber << endl;
    }

    // Static function to get the next roll number (for demonstration purposes)
    static int getNextRollNumber() {
        return nextRollNumber;
    }
};

// Initialize the static member
int Student::nextRollNumber = 1;

int main() {
    // Creating three Student objects
    
    Student student1;
    Student student2;
    Student student3;

    // Displaying the roll numbers of the students
    student1.displayRollNumber();
    student2.displayRollNumber();
    student3.displayRollNumber();

    return 0;
}

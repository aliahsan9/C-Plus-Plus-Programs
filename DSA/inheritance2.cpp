#include <iostream>
using namespace std;

class person {
protected:
    int id;
    string name;
    string address;
public:
    void getinput() {
        cout << "enter an id: ";
        cin >> id;
        cout << "enter the person name: ";
        cin >> name;
        cout << "enter the address of the person: ";
        cin >> address;
    }
    void show() {
        cout << "id: " << id << endl;
        cout << "name: " << name << endl;
        cout << "address: " << address << endl;
    }
};

class student : public person {
private:
    int marks;
    int rno;
public:
    void getdata() {
      getinput();
        cout << "enter the student marks: ";
        cin >> marks;
        cout << "enter the student roll number: ";
        cin >> rno;
    }

    void disp() {
      show();
        cout << "marks: " << marks << endl;
        cout << "roll number: " << rno << endl;
    }
};

int main() {
    student obj2;
    obj2.getdata();
    obj2.disp();

    return 0;
}

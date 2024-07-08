#include <iostream>
using namespace std;
class A
{
private:
    string name;

public:
    void input()
    {
        cout << "Enter the letters: ";
        cin >> name;
    }
    void show()
    {
        cout << "Result1U: " << name << endl;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.show();
    return 0;
}
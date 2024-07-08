#include <iostream>
using namespace std;
int main()
{
    int num = 4;
    float x = 2.5;
    char y = 'A';
    void *ptr = &num;
    ptr = &x;
    ptr = &y;
    cout << "Value of int:" << num << endl;
    cout << "Address of num:" << &num << endl;
    cout << "The value of float:" << x << endl;
    cout << "Address of float:" << &x << endl;
    cout << "Value of char:" << y << endl;
    cout << "Address of char:" << &y << endl;
    return 0;
}
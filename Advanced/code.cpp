#include<iostream>
using namespace std;

#define pi 3.14159

int main()
{
    float r, circumference;
    
    cout << "Enter radius: ";
    cin >> r;
    
    circumference = 2 * pi * r;
    cout << "Circumference = " << circumference << endl;

    return 0;
}
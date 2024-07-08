#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int currentYear = 2024;
  int birthYears[4];
  int i;
  for (i = 1; i < 5; i++)
  {
    cout << "Enter birth year of person " << (i) << ":" << endl;
    cin >> birthYears[i];
  }

  cout << "Ages and classification:" << endl;
  for (int i = 0; i < 4; ++i)
  {
    int age = currentYear - birthYears[i];
    cout << "Person " << (i + 1) << " is " << age << " years old. ";
     if (age > 55 && age < 100)
    {
      cout << "They are aged." << endl;
    }
    else if (age > 0 && age < 55)
    {
      cout << "They are young." << endl;
    }
    else
    {
      cout << "The given age is invalid" << endl;
    }
  }
return 0;
}

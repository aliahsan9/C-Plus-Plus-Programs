#include<iostream>
using namespace std;
union emp{
    int id;
    char ch;
    double salary;
};

int main(){
   union emp Ali;
   Ali.id=1234;
   cout<<Ali.id<<endl;
   Ali.ch='A';
   cout<<Ali.ch<<endl;
Ali.salary=20000;
cout<<Ali.salary<<endl;

    return 0;
}
#include<iostream>
using namespace std;
struct Employ
{
    string Firstname;
    string Surname;
    int number , hours, payperhour;
};
int main(){
    Employ e;
    e.Firstname="Ali";
    e.Surname="Ahsan";
    e.number=(10);
    e.hours=(50);
    e.payperhour=(100);
    cout<<"Employ's Data: "<<endl;
    cout<<"Name: "<<e.Firstname<<" "<<e.Surname<<endl;
    cout<<"Number: "<<e.number<<endl;
    cout<<"Working hours: "<<e.hours<<endl;
    cout<<"Pay Per Hour: "<<e.payperhour<<endl;
    cout<<"Gross Pay: "<<e.hours*e.payperhour<<endl;
    return 0;
}
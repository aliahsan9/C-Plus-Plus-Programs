#include<iostream>
using namespace std;
struct Employ
{
    int id;
    float sal;

};
int main(){
    Employ e;
    e.id=(8751);
    e.sal=(20000);
    cout<<"Employ id: "<<e.id<<endl;
    cout<<"Employ Salary: "<<e.sal<<endl;
    return 0;
}
#include<iostream>
using namespace std;
struct Marks
{
    int marks;
    char grade;
};
int main(){
    Marks m , m2;
    m.marks;
    m.grade;
    cout<<"Enter marks: ";
    cin>>m.marks;
    cout<<"Enter Grade: ";
    cin>>m.grade;
cout<<"The First Record is: "<<endl;
cout<<m.marks<<endl;
cout<<m.grade<<endl;
m2=m;
cout<<"The Second Record is: "<<endl;
cout<<m2.marks<<endl;
cout<<m2.grade<<endl;
return 0;
}

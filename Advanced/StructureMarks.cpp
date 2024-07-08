#include<iostream>
using namespace std;
struct student
{
    string name;
    int marks;
    int rollno;
    float avg;
    char grade;

};
int main(){
    student Ali;
    Ali.name="Ali Ahsan";
    Ali.marks=(835);
    Ali.rollno=(8679);
    Ali.avg=(70.7);
    Ali.grade='B';
cout<<"Student Name:"<<Ali.name<<endl;
cout<<"Student Marks:"<<Ali.marks<<endl;
cout<<"Student Average:"<<Ali.avg<<endl;
cout<<"Student Grade:"<<Ali.grade<<endl;
return 0;
}

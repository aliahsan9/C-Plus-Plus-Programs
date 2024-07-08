#include<iostream>
using namespace std;
struct Result
{
    int marks;
    char grade;
};
struct Record
{
    int rollno;
    int result;
};

int main(){
    Result r;
    Record re;
    re.rollno;
    r.marks;
    r.grade;
    cout<<"Enter your Roll number: ";
    cin>>re.rollno;
    cout<<"Enter your Enter your Marks: ";
    cin>>r.marks;
    cout<<"Enter your Grade: ";
    cin>>r.grade;
    cout<<"Result: "<<endl;
    cout<<"Roll No: "<<re.rollno<<endl;
    cout<<"Marks: "<<r.marks<<endl;
    cout<<"Grade: "<<r.grade<<endl;
    return 0;
}

#include <iostream>
using namespace std;
struct student
{
    int marks;
    char grade;
};
void result(int marks , char grade){
    cout<<"Result: "<<endl;
    cout<<"Marks: "<<marks<<endl;
    cout<<"Grade: "<<grade<<endl;

}
int main(){
    student Ali;
    Ali.marks;
    Ali.grade;
   char grade;
   int marks;
  cout<<"Enter your marks: "<<endl;
  cin>>marks;
  cout<<"Enter your grade: "<<endl;
  cin>>grade;
  result(marks , grade);

}
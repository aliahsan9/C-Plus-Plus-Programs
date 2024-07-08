#include<iostream>
using namespace std;
 
 class result{
   private:
   int marks;
   string name;
   int rno;
   public:

  void input(){
    cout<<"enter the name:"<<endl;
    cin>>name;
    cout<<"enter the roll no:"<<endl;
    cin>>rno;
    cout<<"enter the marks:";
    cin>>marks;

   }
   void show(){
    cout<<"The name of student is:"<<name<<endl;

    cout<<"The Roll no of the student is:"<<rno<<endl;

    cout<<"The total marks of the student are:"<<marks<<endl;
     
   }
   int total(){
    int t=0;
    t=t+marks;
    return t;

   }
   float avg()
   {
    int t=0;
    t=t+marks;
    return t/3;

   }

 };
 int main(){
result r;
r.input();
r.show();
cout<<"The total marks of the student are:"<<r.total()<<endl;

cout<<"The average marks:"<<r.avg()<<endl;

return 0;
 }
#include<iostream>
using namespace std;
void say(int marks, char grade){
   cout<<"Calculated!"<<endl; 

}
int main(){
    int marks;
    char grade;
    cout<<"Enter your marks:";
    cin>>marks;
    cout<<"Marks: "<<marks<<endl;
   if(marks>80){
    cout<<"Grade: "<<"A"<<endl;
   }else{
    if(marks>60&&marks<79){
        cout<<"Grade: "<<"B"<<endl;

    }
    else{
        if(marks>40&&marks<59){
            cout<<"Grade: "<<"C"<<endl;
        }
        else{
            if(marks<40){
                cout<<"Grade: "<<"F"<<endl;
            }
        }
    }
   }
   say(marks, grade);
   return 0;
}
#include<iostream>
using namespace std;

char calculateGrade(int marks){
    char grade;

    if(marks>=90 && marks<=100){
        grade='A';

    }else if (marks>=80 && marks<=90){
        grade='B';

    }else if(marks>=70&&marks<=80){
        grade='C';

    }else
     if (marks>=60&&marks<=70){
        grade='D';

     }else
     {
        grade='F';

     }
     return grade;

}
int main(){

    int marks;
    cout<<"enter marks:";
    cin>>marks;

    cout<<"grade:"<<calculateGrade(marks)<<endl;
    return 0; 
    
}
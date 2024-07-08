#include<iostream>
using namespace std;

struct marks{
    int subject1;
    int subject2;
    int subject3;
    char grade;

};
void displaymarks(const marks& marks){
    cout<<"subjec 1:"<<marks.subject1<<endl;
        cout<<"subjec 2:"<<marks.subject2<<endl;
            cout<<"subjec 3:"<<marks.subject3<<endl;
            cout<<"grade:"<<marks.grade<<endl;



}

int main(){
    marks studentmarks;
    cout<<"enter marks for these three subjects:"<<endl;
    cin>>studentmarks.subject1>>studentmarks.subject2>>studentmarks.subject3;

    cout<<"enter grade:"<<endl;
    cin>>studentmarks.grade;

    cout<<"student marks and grade:"<<endl;
    displaymarks(studentmarks);

    return 0;
}
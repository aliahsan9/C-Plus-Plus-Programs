#include<iostream>
using namespace std;

class student{
    private:
    int marks;
    char grades;

    public:

    student (int m, char g){

        marks=m;
        grades=g;

    }

    void show(){
        cout<<"marks:"<<marks<<endl;

        cout<<"grades:"<<grades<<endl;

    }
};

int main(){

    student student1(85, 'A');
    student student2(70, 'B');

    cout<<"student 1:";
    student1 .show();

    cout<<"student 2:";
    student2.show();

    return 0;
}
#include<iostream>
using namespace std;

class marks{
    private:
    int mark1, mark2, mark3;
    public:

    void in(){
        cout<<"enter the three marks:";
        cin>>mark1>>mark2>>mark3;

    }
    int sum(){
        return mark1+mark2+mark3;

    }
    double avg(){
        return sum()/3;

    }
};
int main (){
    marks obj;
    obj.in();

    cout<<"The sum of three marks is:"<<obj.sum()<<endl;

    cout<<"The average of three marks is:"<<obj.avg()<<endl;

    return 0;

}
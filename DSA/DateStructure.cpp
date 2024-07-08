#include<iostream>
using namespace std;
struct Birth
{
    int date;
    int month;
    int year;
};
int main(){
    Birth birth;
    birth.date=(24);
    birth.month=(3);
    birth.year=(2006);
    cout<<"My Date of Birth is: "<<birth.date<<"/"<<birth.month<<"/"<<birth.year<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int daysinmonth[]={31,28,30,31,30,31,31,31,30,31,30,31};
    int currentmonth,currentday;int totaldays=0;

    cout<<"enter the currentmonth:";
    cin>>currentmonth;

    cout<<"enter the currentday:";
    cin>>currentday;
    if(currentmonth <1 || currentmonth || currentday<1 || currentday>31){
        cout<<"invalid input:";


    }


    for(int i=0;i<currentmonth-1;++i)
    {
        totaldays+=daysinmonth[i];

    }
    totaldays+=currentday;
    cout<<"total number of days in the current year till the entered date:"<<totaldays<<endl;
    return 0;
}
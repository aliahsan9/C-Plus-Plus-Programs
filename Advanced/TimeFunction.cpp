#include<iostream>
using namespace std;
struct Time
{
    
    int hours;
    int minutes;
    int seconds;
};
void addtime(int time1 , int time2){
cout<<"Total time is: "<<endl;
}
int main(){
     int hours1,hours2;
       int minutes1,minutes2;
    int seconds1,seconds2;
    int time1;
    int time2;
    Time time;
    time.hours;
    time.minutes;
    time.seconds;
    cout<<"Enter the hours in Time1: ";
    cin>>hours1;
    cout<<"Enter the minutes Time1: ";
    cin>>minutes1;
    cout<<"Enter the seconds Time1: ";
      cin>>seconds1;
      cout<<"Hours in Time1: "<<hours1<<endl;
      cout<<"Minutes in Time1: "<<minutes1<<endl;
      cout<<"Seconds in Time1: "<<seconds1<<endl;

 cout<<"Enter the hours in Time2: ";
    cin>>hours2;
    cout<<"Enter the minutes Time2: ";
    cin>>minutes2;
    cout<<"Enter the seconds Time2: ";
      cin>>seconds2;
      cout<<"Hours in Time2: "<<hours2<<endl;
      cout<<"Minutes in Time2: "<<minutes2<<endl;
      cout<<"Seconds in Time2: "<<seconds2<<endl;
       addtime(time1 , time2);
      cout<<"Total Hours: "<<hours1+hours2<<endl;
      cout<<"Total Minutes: "<<minutes1+minutes2<<endl;
      cout<<"Total Seconds: "<<seconds1+seconds2<<endl;
    return 0;
      

}
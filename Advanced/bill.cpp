#include<iostream>
using namespace std;
int main(){


int units;
float bill;

cout<<"enter number of units:";
cin>>units;

if (units>500){
    bill=units*7;

}else
if(units>300){
    bill=units*5;
}else
{bill=units*2;
}
bill=bill+150;
if(bill>2000)
{
    bill=bill-(bill*5/100);}

    cout<<"total bill"<<" = " <<bill;




    return 0;
}
#include<iostream>
using namespace std;
int main(){
    float sal,netSal;
    cout<<"enter your sal:";
    cin>>sal;

    if(sal>=20000){
        netSal=sal-(sal*7/100);
    }else
    if(sal>=10000 &&  20000){
        netSal=sal-1000;

    }else{
    netSal=sal;}
    cout<<"netSal"<<" = "<<netSal<<endl;



    return 0;
}

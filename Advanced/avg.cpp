#include<iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3;
    float avg;
    cout<<"enter marks of sub1:";
    cin>>sub1;
    cout<<"enter marks of  sub2:";
    cin>>sub2;
    cout<<"enter marks of sub3:";
    cin>>sub3;
    
avg=(sub1+sub2+sub3)/3;
if(avg>80){
    cout<<"u r above standard"<<endl;
    cout<<"addmission granted"<<endl;
  
}
return 0;
}
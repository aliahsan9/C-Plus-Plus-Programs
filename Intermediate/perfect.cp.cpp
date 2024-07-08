#include<iostream>
using namespace std;
int main(){
    int  sum, num, mid, i=0;
    cout<<"enter a number:";
    cin>>num;
    mid=num/2;
    for(int i=1;i<=mid;i++)
{if((num%i)==0)
sum=sum+i;
}

if (sum==num){
    cout<<"it is perfect number:"<<endl;

}else 
cout<<"it is not perfect number:"<<endl;

return 0;
}
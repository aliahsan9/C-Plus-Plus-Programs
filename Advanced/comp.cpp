#include<iostream>
using namespace std;
int main(){
    int num,i,p=1;
    cout<<"enter an integer:";
    cin>>num;
    for(int i=2;i<=num/2;i++)
    if(num%i==0)
    
        p=0;
  

    if(p==1){
        cout<<"the number is prime"<<endl;
        }

        else
        {
        cout<<"the number is not prime"<<endl;
}

    
    return 0;
}
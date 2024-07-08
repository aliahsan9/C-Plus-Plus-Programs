#include<iostream>
using namespace std;
int main(){
    int num,c,p=1;
    cout<<"enter an integer:";
    cin>>num;
    for(int c=2;c<=num/2;c++)
    if(num%c==0)
    
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
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){

        for(int j=0;j<=i;j++)

        if(i==0 && j==0){

            cout<<"1=1"<<endl;

        }
        else if (i==1 && j==0){

            cout<<"1+2=3"<<endl;
        }
  
    }
    return 0;
}
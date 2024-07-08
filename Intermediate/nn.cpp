#include<iostream>
using namespace std;
int main(){
    int n,sum=0;

    cout<<"enter a positive integer value for n:";
    cin>>n;


    for(int i=1;i<=n;++i){

        sum+=i*i;

    }

    cout<<"the sum of squares of integers "<<" = "<<sum<<endl;

    return 0;
}
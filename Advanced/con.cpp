#include<iostream>
using namespace std;
int main(){
    int num;
    double sum =0;

    cout<<"enter a number:";
    cin>>num;

    for(int i=1;i<=num;i++){
        if(i%2==0){
            continue;
        }

        sum+=i;

    }

    cout<<"sum of the series"<<sum<<endl;

    return 0;
}
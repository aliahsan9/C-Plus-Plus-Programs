#include<iostream>
using namespace std;
int main(){
    int n , i=1;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=1000;i+1){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
    return 0;
}
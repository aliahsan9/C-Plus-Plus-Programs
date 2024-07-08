#include<iostream>
using namespace std;
int main(){
    int n , i;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=10;i+1){
        cout<<n<<" * "<<i<<" = "<<n*i;
        ++i;
    }
    return 0;
}
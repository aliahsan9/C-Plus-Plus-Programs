#include<iostream>
using namespace std;
int power(int n , int x){
    if(x==0){
        return 1;

    }else{
        return n*power(n , x-1);
    }
}
int main(){
    int n , x;
    cout<<"Enter the  Base and Exponent numbers in input: ";
    cin>>n>>x;
    cout<<"Result: "<<power(n , x)<<endl;
    return 0;
}
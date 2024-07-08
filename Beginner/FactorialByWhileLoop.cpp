#include<iostream>
using namespace std;
int main(){
    int n , factorial = 1;

    cout<<"enter a positive number:";
    cin>>n;
    int i=n;
    while (i>1)
    {
        factorial *=i;
        i--;
    }
    cout<<"Factorial of "<< n <<" = "<<factorial<<endl;

    return 0;
    
}

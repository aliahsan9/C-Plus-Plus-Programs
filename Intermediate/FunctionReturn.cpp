#include <iostream>
using namespace std;
void myFunction(int sum ){
    cout<<"Sum of both Numbers: "<<sum<<endl;
}
int main(){
    int a,  b, sum;
    cout<<"Enter a first number:";
    cin>>a;
    cout<<"Enter a second number:";
    cin>>b;
    cout<<"Square of a: "<<a*a<<endl;
    cout<<"Cube of b: "<<b*b*b<<endl;
    sum=a*a+b*b*b;
    myFunction(sum);
    return 0;

}
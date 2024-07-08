#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int a=10;
    double b=3.14;
 // implicit typecastig
    double a2=a;
    cout<<a2<<endl;
    int b2=b;
    cout<<b2<<endl;


     // explicit typecastig
    double a3=(double)a;
    cout<<a3<<endl;
    int b3=(int)b;
    cout<<b3<<endl;



    return 0;

}
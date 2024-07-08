#include<iostream>
using namespace std;

template<typename T>
T getmax(T a, T b){
   return (a>b)? a:b;

}


int main(){

   cout<<"enter the two numbers:";

   double num1,num2;

   cin>>num1>>num2;

   double maxval=getmax(num1,num2);

   cout<<"the maximum value is:"<<maxval<<endl;

   return 0;
}

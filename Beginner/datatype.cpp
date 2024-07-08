#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int a =10;
    double b=2.345;
    char c='A';
    cout<<typeid(a).name()<<endl;
     cout<<typeid(b).name()<<endl;
      cout<<typeid(c).name()<<endl;
      return 0;
}
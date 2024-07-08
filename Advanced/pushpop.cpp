#include <iostream>
#include<string.h>
using namespace std;
int main(){
string myaddress="751";
cout<<"original address:"<<myaddress<<endl;
myaddress.push_back('A');
cout<<"modified value:"<<myaddress<<endl;
myaddress.pop_back();
cout<<"pop value"<<myaddress<<endl;
return 0;

}
#include<iostream>
using namespace std;
int main(){
    int num;
    for(int num=1;num<=10;num++){
    if(num==5)
  {  goto out;
  }
cout<<"num"<<endl; // 2 3 4
}
cout<<"hello word:"<<endl;
out:
cout<<"ali bhai!"<<endl;
return 0;
}
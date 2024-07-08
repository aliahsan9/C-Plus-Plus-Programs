#include<iostream>
using namespace std;
void changevalue(int *p){
    *p=*p+10;
    cout<<"pointer value:"<<*p<<endl;

}
int main(){
 
    int num;
    cout<<"enter value:";
    cin>>num;
    cout<<"original value:"<<num<<endl;
    changevalue(&num);
    cout<<"new value:"<<num<<endl;
}
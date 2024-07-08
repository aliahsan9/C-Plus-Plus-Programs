#include<iostream>
using namespace std;

void inputvalue(int& var){

    cout<<"enter a value:";

    cin>>var;

}
void doublevalue(int& var){
    var*=2;

}

int main(){

    int myvar;

inputvalue(myvar);
    cout<<"original value:"<<myvar<<endl;


doublevalue(myvar);

    cout<<"doubled value:"<<myvar<<endl;


    return 0;
}
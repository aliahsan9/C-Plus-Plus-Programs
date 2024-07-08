
#include<iostream>
using namespace std;

void inputvaues(int& var){

cout<<"enter a value:";
cin>>var;

}
void inputvalues(int& var){
    var*=2;
}

int main(){
    int myvar;

    inputvalues(myvar);

    cout<<"original value:"<<myvar<<endl;

    double inputvalue(myvar);

    cout<<"doubled value:"<<myvar<<endl;


    return 0;
}
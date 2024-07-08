#include<iostream>
using namespace std;

int globalvariable;
int  multiplybytwo (){
    globalvariable*=2;

}

int main(){
    cout<<"enter a number:";
    cin>>globalvariable;

    multiplybytwo();
    cout<<"result:"<<globalvariable;
    return 0;
}

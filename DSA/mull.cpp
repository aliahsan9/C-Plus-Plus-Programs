#include<iostream>
using namespace std;

int mul(int num1,int num2){
    return(num2 %num1==0) ? 1:0;

}
int main(){
    int num1,num2;
    cout<<"enter a num1:";
    cin>>num1;
    cout<<"enter a num2:";
    cin>>num2;

    if(mul(num1,num2)){
        cout<<num2<<" is the multiple of "<<num1<<endl;

    }else{

        cout<<num2<<" is not a multiple of "<<num1<<endl;
    }
}
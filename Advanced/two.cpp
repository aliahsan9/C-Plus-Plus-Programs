#include<iostream>
using namespace std;

int calculatesquare(int num){
return num*num;
}
int calculatecube(int num){
    return num*num*num;

}
int main(){
    int num1,num2;
    cout<<"enter a first number:";
    cin>>num1;
    cout<<"enter a second number:";
    cin>>num2;

    int square=calculatesquare(num1);
    int cube=calculatecube(num2);

    int result=square+cube;



cout<<"the result of adding the square of "<<num1<<" and the cube of "<<num2<<" is = "<<result<<endl;

return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num , fact=1;
    cout<<"Enter an integer: ";
    cin>>num;

    //stores original number in number
    int originalNum=num;

    //check if the entered number is zero
    if(num==0){
        fact=1;
    }else{
        while (num>0)
        {
            fact=fact*num;
            num--;

        }
        

    }
    cout<<"Factorial of "<<originalNum<< " is: "<<fact<<endl;
    
    return 0;
}
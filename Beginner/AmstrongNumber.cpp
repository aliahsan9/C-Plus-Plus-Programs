#include<iostream>
using namespace std;
int main(){
    int num, originalNum, remainder, result =0;
    cout<<"Enter the three-digit number:";
    cin>>num;
    // we will store the number in the originalNum teemporary
    originalNum=num;

while (originalNum !=0)
{
    // take the modulu of the original number with 10 to get the remainder 1
    remainder =originalNum % 10;

    result += remainder* remainder *remainder;
// divide the original number with 10 to check the result 
    originalNum/=10;

}

if(result==num)
cout<<num<<" is an armstrong number."<<endl;
else
cout<<num<<" is not an armstrong number."<<endl;

return 0;

}
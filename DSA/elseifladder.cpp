#include <iostream>
using namespace std;
int main(){
int amt,tax;
cout<<"enter amount:";
cin>>tax;   
if(amt<=1000){
    cout<<"no tax"<<"="<<tax<<"ruppees";
}else if(amt>1000){
    tax=amt*10/100;
    cout<<"tax amount"<<"="<<tax<<"ruppees";

}else if(amt>1000&&amt<=10000){
    tax =amt*20/100;
    cout<<"tax amount"<<"="<<tax<<"ruppees";

}else
tax=amt*40/100;
cout<<"tax amount"<<"="<<tax<<"ruppees";
return 0;

}  
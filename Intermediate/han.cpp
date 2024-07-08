#include<iostream>
#include<stdexcept>
using namespace std;

class bankaccount{
    private:
    
    double balance;
    public:
    bankaccount(){
        balance=1000;

    }
    void deposit(double amount){

        balance+=amount;
        cout<<"deposited"<<amount<<"rippees. new balance"<<"ruppees"<<endl;

    }
     void withdraw(double amount){
if(balance>=amount){
balance-=amount;

        balance+=amount;
        cout<<"withdraw"<<amount<<"rippees. new balance"<<"ruppees"<<endl;



}else{

    throw"insufficient funds!";

}
     }
     };
     int main(){

        bankaccount account;

        try{
            double depositamount, withdrawamount;
            cout<<"enter deposit amount:";
            cin>>depositamount;
            account.deposit(depositamount);

            cout<<"enter the deposit amount:";
            cin>>depositamount;

account . deposit(depositamount);
            cout<<"enter the withdraw:";
            cin>>withdrawamount;
            account.withdraw(withdrawamount);


        }
        catch(const char*message ){

            cout<<"exception caught:"<<message<<endl;


        }

        return 0;
     }
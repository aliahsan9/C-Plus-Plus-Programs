#include<iostream>
using namespace std;
int main(){
    int pwd=8751 , mypwd;
    cout<<"Enter your password?";
    cin>>mypwd;

    while (pwd>0)
    {
        if (pwd!=mypwd)
        {
            cout<<"Please enter your correct password?";
            cin>>mypwd;
        }else{
            cout << "Unlocked!" <<endl;
            break;
        }
        
    }
    
    return 0;
}
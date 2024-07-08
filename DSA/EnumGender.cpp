#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    enum Gender{Male , Female};
    Gender gender =Male;
    switch (gender){
        case Male:
        cout<<"Gender is Male."<<endl;
        break;
        case Female:
        cout<<"Gender is Female."<<endl;
        break;
        default:
cout<<"Gender can be Male or Female."<<endl;
    }
    return 0;
}
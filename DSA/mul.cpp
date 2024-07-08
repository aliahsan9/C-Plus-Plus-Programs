
#include<iostream>
using namespace std;

int mul(int a, int b){
    return(b%a==0) ? 1:0;

}
int main(){
    int a=10,b=5;

    if(mul(a,b)){

        cout<<b<<" is multiple of "<<a<<endl;

    }else{

        cout<<b<<" is not a multiple of "<<a<<endl;

        
    }
    return 0;
}
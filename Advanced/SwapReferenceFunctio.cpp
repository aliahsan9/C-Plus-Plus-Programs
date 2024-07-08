#include<iostream>
using namespace std;
void swapnums(int &x,int &y){
    int temp=x;
     x=y;
     y=temp;

}
int main(){
    int firstnum=10;
    int secondnum=20;
    cout<<"Values before swapping:"<<endl;
    cout<<firstnum<<" "<<secondnum<<endl;
    swapnums(firstnum , secondnum);
    cout<<"Values after swapping:"<<endl;
    cout<<firstnum<<" "<<secondnum<<endl;
    return 0;

}
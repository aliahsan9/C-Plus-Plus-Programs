#include<iostream>
using namespace std;
int main(){


float values[5];
cout<<"enter five integers:";
for(int i=0;i<5;i++){
    cin>>values[i];


}
cout<<"values in reverse order :"<<endl;
for(int i=4;i>=0;--i){
    cout<<values[i]<<" ";

}
cout<<endl;
return 0;
}
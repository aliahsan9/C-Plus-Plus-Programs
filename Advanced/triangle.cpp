#include<iostream>
using namespace std;

int calculatearea(int  base,int  height){
    return 0.5*base*height;

}
int main(){
    int  base, height;
    cout<<"enter a base:";
    cin>>base;
    cout<<"enter a height:";
    cin>>height;
    
    int area=calculatearea(base,height);
    {
        cout<<"the area of the triamgle is  = "<<area<<endl;

        
    }
    return 0;
}

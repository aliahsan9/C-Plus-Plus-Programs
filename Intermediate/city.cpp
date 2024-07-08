#include<iostream>
#include<string>
using namespace std;
int main(){

    string cities[5];
    cout<<"enter the name of five cities:";

    for(int i=0;i<5;i++)
    {
        cout<<"city"<<i+1<<" : ";
        cin>>cities[i];

    }

    cout<<"the name of five cities are:"<<endl;
    for(int i=0;i<5;i++){
        {
            cout<<cities[i]<<endl;

        }
    }
    return 0;
}
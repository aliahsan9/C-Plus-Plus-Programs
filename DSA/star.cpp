#include<iostream>
using namespace std;
int main(){
    int height;

    cout<<"enter a height of the pattern:";
    cin>>height;

    int row =height;
    while(row>0){
        int col=row;
        while(col>0){
            cout<<" * ";
            col--;

        }
        cout<<endl;
        row--;
    }
    return 0;
}
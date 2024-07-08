
#include<iostream>
using namespace std;

void displaySquare(int num, char ch){

    for(int i=0; i<num;i++){
        for(int j=0;j<num;j++){

cout<<ch<<" " ;

        }
        cout<<endl;
    }
}
int main(){
    

        int num;
        char ch;

        cout<<"enter a number:";
        cin>>num;

        cout<<"enter a character:";
        cin>>ch;

        displaySquare(num , ch);
        return 0;
    }

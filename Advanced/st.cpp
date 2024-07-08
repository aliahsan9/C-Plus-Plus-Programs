#include<iostream>
#include<string.h>
using namespace std;
int main(){
const int max_length=100;
char inputstring[max_length];

cout<<"enter a string:";

cin.getline(inputstring,max_length);

int length=0;

while(inputstring[length]!='\0'){
    length++;

}

cout<<"length of the string:"<<length<<endl;





    return 0;
}
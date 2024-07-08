#include<iostream>
#include<string.h>
using namespace std;
int main(){
const int max_length=100;

char input_string[max_length];
char copied_string[max_length];

cout<<"enter a string";
cin.getline(input_string, max_length);

strcpy(copied_string,input_string);

cout<<"copied string:"<<copied_string<<endl;

return 0;

}
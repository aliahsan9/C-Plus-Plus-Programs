#include<iostream>
#include<string.h>
using namespace std;
 int main(){
    const int max_length=100;
    char input_string[max_length];
    int vowel_count=0;

    cout<<"enter a string:";
    cin.getline(input_string,max_length);

    for(int i=0;i<strlen(input_string);i++){

        char ch =tolower(input_string[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel_count++;
        }
    }

    cout<<"number of vowels:"<<vowel_count<<endl;
    return 0;
 }
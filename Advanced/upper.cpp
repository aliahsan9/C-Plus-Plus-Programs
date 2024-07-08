#include<iostream>
#include<string>
using namespace std;
int main(){

    string sentence;
    cout<<"enter a sentence:";
    getline(cin,sentence);

    int upper_vowels=0,lower_vowels=0,upper_consonants=0,lower_consonants=0;
    for(char ch:sentence){
        if(isalpha(ch)){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')

            if(isupper(ch)){
                upper_vowels++;

            }
            else{

                lower_vowels++;
            }
        }else{
            if(isupper(ch)){
                upper_consonants++;

            }else{
                lower_consonants++;
            }
        }
        }
        cout<<"upercase vowels:"<<upper_vowels<<endl;
         cout<<"lowercasevowels:"<<lower_vowels<<endl;
          cout<<"upercase consonants:"<<upper_consonants<<endl;
           cout<<"lowercase consonants:"<<lower_consonants<<endl;

           return 0;
}
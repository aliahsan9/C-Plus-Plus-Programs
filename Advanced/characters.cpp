#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100],str2[100];
    int n;

    cout<<"enter first string:";
    cin.getline(str1,100);
    cout<<"enter second string:";
    cin.getline(str2,100);

    cout<<"enter the number of characters to compare:";
    cin>>n;

    int result=strncmp(str1,str2,n);

    if(result<0){
        cout<<"the first string is less than second string."<<endl;

    }else{
        if(result==0){

            cout<<"the first string is equal to second string."<<endl;

        }else{
            cout<<"the first string is greater than second string."<<endl;

        }
        return 0;
    }
}
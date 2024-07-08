
#include<iostream>
#include<cstring>
using namespace std;
 int main(){
char str1[100],str2[100];

cout<<"enter a first string :";
cin.getline(str1,100);

cout<<"enter a second string :";
cin.getline(str2,100);

int result = strcmp(str1,str2);

if(result<0){

    cout<<"the first string is less thaan the second string:"<<endl;

}else{

    if (result==0){
        cout<<"the  first string is equal to the secoond string:"<<endl;

    }else{
        cout<<"the first string is greater than the second string."<<endl;

    }
}
    return 0;

 }
 
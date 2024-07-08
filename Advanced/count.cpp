#include<iostream>
#include<string>
using namespace std;
int main(){
    string countries[5];
cout<<"enter the name of five countries:";
for(int i=0;i<5;i++){
    cout<<"country:"<<i+1<<" : ";
    cin>>countries[i];

}
cout<<"the country whose nme starts with vowel is :"<<endl;

for(int i=0;i<5;i++)
{
    char firstletter=  tolower(countries[i])[0];

  if( firstletter=='a' || firstletter=='e' || firstletter ==' i '|| firstletter =='o'||firstletter=='u'){

  }
    cout<<countries<<endl;
    break;

}
return 0;
}
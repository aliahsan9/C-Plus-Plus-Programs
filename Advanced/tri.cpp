#include<iostream>
using namespace std;
int main(){
    int height;
    char currentchar='A';
    int charCount=1;
    cout<<"enter a height of triangle:";
    cin>>height;

for(int i=0;i<height;i++){

    for(int j=0;j<charCount;j++)
{
    cout<<currentchar<<" ";
    currentchar++;
}
cout<<endl;
charCount++;
}

return 0;
}

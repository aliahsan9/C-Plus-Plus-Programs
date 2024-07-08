#include<iostream>
using namespace std;
void say(float Area){
    cout<<"Area of Triangle: "<<Area<<endl;
}
int main(){
 float base;
 float height;
 float Area;
 cout<<"Enter the Base of the triangle:";
 cin>>base;
 cout<<"Enter the height of the triangle:";
 cin>>height; 
 Area=0.5 *(base * height);
say(Area);
return 0;
}
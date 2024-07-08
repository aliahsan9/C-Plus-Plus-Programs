#include<iostream>
using namespace std;
struct car
{
    string brand;
    string model;
    int price;

};

int main(){
car mycar1;

mycar1.brand="Mehran";
mycar1.model="x95";
mycar1.price=700000;

  cout<<"Brand: "<<mycar1.brand<<endl;
    cout<<"Model: "<<mycar1.model<<endl;
      cout<<"Price: "<<mycar1.price<<endl;
      return 0;

}
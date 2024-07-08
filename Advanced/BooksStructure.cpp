#include<iostream>
using namespace std;
struct Books
{
    int id;
    int pages;
    float price;
};
int main(){
    Books b1, b2;
    b1.id=(8751);
    b1.pages=(90);
    b1.price=(700);
    cout<<"Book1 data: "<<b1.id<<" "<<b1.pages<<" "<<b1.price<<endl;
  
     b2.id=(8888);
    b2.pages=(101);
    b2.price=(900);
    cout<<"Book1 data: "<<b2.id<<" "<<b2.pages<<" "<<b2.price<<endl;

    
    if(b1.price>b2.price){
        cout<<"The costly book price is:"<<b1.price<<endl;

    }else{
        cout<<"The most costly book price is:"<<b2.price<<endl;
    }
    return 0;
}
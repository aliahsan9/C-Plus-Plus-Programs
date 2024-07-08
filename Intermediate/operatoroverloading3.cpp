#include<iostream>
using namespace std;

class counter{
     private:

     int count;
     public:

     counter ():count(0){}

     void display ()const{
cout<<"count:"<<count<<endl;

     }
     counter operator++(){
        ++count;

        return *this;

     }

     counter operator++(int){

        counter temp=*this;

        count++;
        return temp;
     }

};

int main(){

    counter c;
    cout<<"initial count:";
    c.display();

    counter c_old=c++;
    cout<<"after prefix:";
    c.display();

    c_old.display();

    cout<<"after postfix:";
    c.display();

    return 0;
}
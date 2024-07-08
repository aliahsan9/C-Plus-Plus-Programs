#include<iostream>
using namespace std;

class mynumber{
    private:
    int value;
    public:

    mynumber(int v =0):value(v){}

    mynumber& operator+=(const mynumber& other){

        value+=other.value;
        return *this;
        
    }
    void display()const {

        cout<<"value:"<<value<<endl;


    }
};
int main(){

    mynumber n1(10);
    mynumber n2(5);

    cout<<"initial values:"<<endl;
    n1.display();
    n2.display();

    n1+=n2;

    cout<<"after n1+=n2:"<<endl;

    n1.display();

    return 0;

    
}
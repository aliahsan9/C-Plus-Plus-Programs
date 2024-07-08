#include<iostream>
using namespace std;
class complex{
    private:
    double real;
    double imag;

    public:

    complex (double r=0, double i=0): real (r),imag(i){}

    complex operator+(const complex &other) const{

        return complex (real + other.real, imag+other.imag);

    }

    void display(){

        cout<<real<<" + "<<imag<<"i"<<endl;


    }

};
int main(){

    complex c1(2,3);
    complex c2 (5,6);  

    complex c3=c1+c2;

    cout<<"sum of complex numbers :"<<endl;

    c3.display();
    return 0;

}
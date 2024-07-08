#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){

int degrees=0;
double const pi =3.14;
cout<<"degrees\t radians\n";
cout<<"----------\n";


while(degrees<=360){

    double radians=degrees* (pi/180);
    cout<<"degrees"<<"\ t"<<fixed<<setprecision(4)<<radians<<endl;
    degrees+=10;



}

    return 0;

}
#include<iostream>
using namespace std;
struct  Contact
{
    int countryCode;
    int areaCode;
    int number;
};
int main(){
    Contact c1 , c2;;
    c1.countryCode=(92);
    c1.areaCode=(3);
    c1.number=(141710751);
    cout<<"My Phone Number is: "<<"+"<<c1.countryCode<<"-"<<c1.areaCode<<c1.number<<endl;
     c2.countryCode=(91);
    c2.areaCode=(2);
    c2.number=(131437865);
    cout<<"My Second Phone Number is: "<<"+"<<c2.countryCode<<"-"<<c2.areaCode<<c2.number<<endl;
    return 0;
}

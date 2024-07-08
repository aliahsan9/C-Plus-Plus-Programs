#include<iostream>
#include<string>
using namespace std;

class TV{
    private:

string brandname;
string model;

double retailprice;

public:


TV(string b, string m, double p){

    brandname=b;
    model=m;
    retailprice=p;

}

void display(){

    cout<<"brand name:"<<brandname<<endl;
    cout<<"model:"<<model<<endl;
cout<<"retail price:"<<retailprice<<endl;


}

void changeattributes(string b, string m, double p){
    brandname=b;
    model=m;
    retailprice=p;
}
};
int main(){

    TV myTV("sumsung", "QUELD",999.99);

    cout<<"initial tv attributes:"<<endl;

    myTV.display();

    myTV.changeattributes("LG","OLED",1299);
cout<<"\nupdated TV attributes:"<<endl;

myTV.display();

return 0;
}
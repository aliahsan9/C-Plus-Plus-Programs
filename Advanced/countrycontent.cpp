#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Country{
    char name[50];
    char capital[50];

    int population;

};
int main(){

    Country country;

    string path="c:\\users\\fast computers\\desktop\\country.txt";

    ifstream infile(path,ios::binary);

    if(!infile){

        cerr<<"error opening in the file!!";
        return 1;
    }

    infile.read(reinterpret_cast<char*>(&country),sizeof(country));

    infile.close();

    cout<<"country name:"<<country.name<<endl;

    cout<<"caital name:"<<country.capital<<endl;

    cout<<"population:"<<country.population<<endl;

    return 0;
}
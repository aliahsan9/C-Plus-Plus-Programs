#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

string cities[5];
string path="c:\\users\\fast computers\\desktop\\city.txt";

ofstream outfile(path);

if(!outfile){
    cerr<<"error opening at:"<<path<<endl;
    return 1;
}

cout<<"enter the name of five cities:"<<endl;
for(int i=0;i<5;++i){
    cout<<"city "<<(i+1)<<": ";

    getline (cin.cities[i]);
    outfile<<cities[i]<<endl;

}

outfile.close();

cout<<"city names have been saved in the file."<<path<<endl;

return 0;
}
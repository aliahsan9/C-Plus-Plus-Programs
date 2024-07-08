#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    string cities[5];
    string path="c:\\users\\fast computers\\desktop\\city.txt";

    ofstream outfile(path);

    if(!outfile){
        cerr<<"error opening at:"<<path;

        return 1;
    }

    cout<<"enter the name of five cities:"<<endl;

    for(int i=0;i<5;++i){
  

    getline(cin,cities[i]);
outfile<<cities[i]<<endl;


    }

    outfile.close();

cout<<"the city names are been saved in the file."<<endl;


return 0;

}
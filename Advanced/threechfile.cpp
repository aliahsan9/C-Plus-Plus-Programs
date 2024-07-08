#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    char character[3];

    string path="C:\\Users\\Fast Computers\\Desktop\\char.txt";

    fstream outfile;

    if(!outfile){
        cerr<<"error opening at :"<<path<<endl;
        return 1;
    }

    cout<<"enter the three characters:"<<endl;

    for(int i=0;i<3;++i){
        cout<<"characters "<<(i+1)<<character[i]<<endl;


    }

    outfile.close();

    cout<<"characters have been saved in the file."<<path<<endl;

    return 0;
}

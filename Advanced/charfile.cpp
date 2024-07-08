#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){

    char characters[5];

    string path="c:\\users\\fast computers\\desktop\\char.txt";

    ofstream outfile(path);
    if(!outfile){

        cerr<<"error opening the file at :"<<path<<endl;
        return 1;
    }

    cout<<"enter the five characters:";
    for(int i=0;i<5;++i){
        cin>>characters[i];

    }
    for(int i=0;i<5;++i){

outfile<<characters[i]<<endl;
    }

    outfile.close();

    cout<<"characters have been written in the file."<<path<<endl;

    return 0;
}
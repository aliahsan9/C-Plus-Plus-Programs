#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    char character;

    ifstream infile("c:\\users\\fast computers\\desktop\\char.txt");
    if(!infile){

        cerr<<"error opening the file!"<<endl;

        return 1;
    }

    while(infile.get(character)){

        cout<<character;

    }

    infile.close();

    return 0;

}
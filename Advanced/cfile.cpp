#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream outfile("output.txt");

    if(outfile.is_open()){
        char char1='A';
        char char2='B';
        char char3='C';

        outfile.close();

        cout<<"characters are written in the file succesfully!"<<endl;

    }else{

        cout<<"unable to create a file!"<<endl;


    }

    return 0;
}
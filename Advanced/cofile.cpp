#include<iostream>
#include<fstream>
using namespace std;

ifstream infile;
ofstream onfile; char str;


infile.open("C:\\Users\\Fast Computers\\Desktop\\ALI NOHANA.txt");
onfile.open("C:\\Users\\Fast Computers\\Desktop\\ALI NOHANA2.txt");


while(infile.get(str)){
     onfile.put(str);
     }

{
    cout<<"copied!!!";

infile.close();
onfile.close();
}


#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream infile; string str;
infile.open("C:\\Users\\Fast Computers\\Desktop\\ALI NOHANA.txt");

while(getline (infile,str)){
    cout<<str;
    infile.close();
}
}
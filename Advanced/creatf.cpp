
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream onfile;
    onfile.open("C:\\Users\\Fast Computers\\file.txt");
    cout<<"file created successfully.";
    onfile.close();

}
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream onfile;
    onfile.open("C:\\Users\\Fast Computers\\Desktop\\ALI NOHANA.txt");
    onfile<<("thank u for watching my video!");
    cout<<"data has written in the file!";
    onfile.close();

}

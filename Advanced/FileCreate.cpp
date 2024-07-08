#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream onfile;
    onfile.open ("C:\\Users\\Fast Computers\\Desktop\\File.txt");
    onfile <<("Thanks for watching videos from my channel!");
    cout<<"File Created Successfully!";
    onfile .close();
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream infile;
    ofstream onfile; char str;

    infile.open("c:\\users\\fast computers\\desktop\\file.txt");
    onfile.open("c:\\users\\fast computers\\desktop\\file2.txt");

    while(infile.get(str)){
        onfile.put(str);

    }

    cout<<"copied!!";
    infile.close();
    onfile.close();
}
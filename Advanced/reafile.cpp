#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream onfile; string str;
onfile.open("C:\\Users\\Fast Computers\\Desktop\\ALI NOHANA.txt");

while(getline (str)){
    cout<<"data has been written in the file!!";
    onfile.close();
}
}
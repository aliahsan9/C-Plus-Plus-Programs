#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
string path="c:\\users\\fast computers\\desktop\\city.txt";
ifstream infile(path);

if(!infile){

    cerr<<"error opening at:"<<path<<endl;

    return 1;

}

string line;

cout<<"contents of "<<path<<": ";
while(getline(infile,line)){

    cout<<line<<endl;
}

infile.close();

return 0;
}
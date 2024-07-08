#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

string path="C:\\Users\\fast computers\\Desktop\\students.txt";
ifstream infile(path);
if(!infile){

    cerr<<"error opening the file!"<<endl;
    return 1;


}

string line;
cout<<"records from the file:"<<endl;

while(getline(infile, line)){

    cout<<line<<endl;

}

infile.close();

return 0;
} 
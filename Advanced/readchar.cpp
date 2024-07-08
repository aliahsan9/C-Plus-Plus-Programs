#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){


    char characters[5];

    string path="c:\\users\\fast computers\\desktop\\read char.txt";

    ifstream infile;

  
{
    while( ( getline(infile,characters)))
cout<<"characters are readed in the file "<<endl;

    }

    infile.close();

return 0;
}
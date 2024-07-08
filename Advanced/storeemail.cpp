#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct user{
    string name;

    string email;
};
int main(){


user user;

cout<<"enter your name:";
getline(cin, user.name);

cout<<"enter your email:";
getline(cin,user.email);

string path="c:\\users\\fast computers\\desktop\\email file.txt";

ofstream outfile(path);

if(!outfile){

    cerr<<"error opening the file!!";
    return 1;

}
outfile << "name:"<<user.name<<endl;
outfile<<"email:"<<user.email<<endl;

outfile.close();

cout<<"user name and email has written in the file."<<path<<endl;


return 0;

}
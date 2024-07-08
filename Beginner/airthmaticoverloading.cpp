#include<iostream>
#include<string>
using namespace std;
class mystring{
    private:
    string str;
    public:


    mystring (const string& s=""): str(s){}

    mystring operator+(const mystring& other) const{

        return mystring (str+other.str);

    }

    void display()const{

        cout<<str<<endl;
    }
};
int main(){

    mystring s1("hello, ");
    mystring s2("world!");

    mystring s3=s1+s2;
    cout<<"concatenated string:";

    s3.display();


    return 0;
}
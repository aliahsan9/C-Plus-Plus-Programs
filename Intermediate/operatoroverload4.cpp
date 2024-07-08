#include<iostream>
using namespace std;
class mystring{
    private:
    string str;
    public:

    mystring (const string& s=""):str(s){}

    bool operator==(const mystring& other)const{

        return str.length()==other.str.length();


    }

    void display()const{
        cout<<str<<endl;


    }
};

int main(){

    mystring s1("hello");
    mystring s2("world");
    mystring s3("hi");

    cout<<"comparing s1 and s2:"<<(s1==s2)<<endl;

    cout<<"comparing s1 and s3:"<<(s1 == s3)<<endl;

    return 0;
}
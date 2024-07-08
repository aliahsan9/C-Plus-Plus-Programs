#include<iostream>
using namespace std;

class example{
    private:

    int num;
    char ch;
    public:

    example(){

        num=0;
        ch='X';

    }
    example (int n, char c){

        num=n;
        ch=c;
    }

    void show(){

        cout<<"num:"<<num<<endl;

        cout<<"char:"<<ch<<endl;

    }
};


int main(){
    example obj1;

    cout<<"object 1 (default constructor):";

    obj1.show();

    example obj2(42,'A');

    cout<<"object 2 (parameterized constructor):";

    obj2.show();

    return 0;
}
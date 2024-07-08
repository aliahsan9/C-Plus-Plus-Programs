#include<iostream>
using namespace std;

class simple{

    private:
    int num;
    char ch;
    public:

    simple(){

        num=0;
        ch='X';

    }

    void show(){

        cout<<"num:"<<num<<endl;
        cout<<"char:"<<ch<<endl;

    }
};
int main(){
    simple obj;
    obj.show();

    return 0;
}
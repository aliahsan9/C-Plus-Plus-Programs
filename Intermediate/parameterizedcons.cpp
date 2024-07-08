#include<iostream>
using namespace std;

class simple{

    private:
    int num;
    char ch;
    public:

    simple(int n, char c){
        num=n;
        ch=c;

    }

    void show(){

        cout<<"num:"<<num<<endl;

        cout<<"char:"<<ch<<endl;

    }
};
int main(){

    simple obj(42, 'A');
    obj.show();
    

    return 0;
}
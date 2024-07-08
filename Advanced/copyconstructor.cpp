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

    simple(const simple &obj){
        num=obj.num;
        ch=obj.ch;

    }

    void show(){

        cout<<"num:"<<num<<endl;
        
        cout<<"char:"<<ch<<endl;

    }
};

int main(){

    simple obj1(42, 'A');
    
    obj1.show();

    simple obj2=obj1;

    obj2.show();

    return 0;
}
#include<iostream>
using namespace std;
class simple{
    private:

    int num;
    public:

    simple(int n){
        num=n;

    }

    void show(){

        cout<<"num:"<<num<<endl;

    }
};
int main(){

    simple obj(42);
    obj .show();
    

    return 0;
}
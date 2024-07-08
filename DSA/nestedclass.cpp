#include<iostream>
using namespace std;

class outer{
    public:
    class inner{
        public:

        void display(){
            cout<<"hello word from the outer class!"<<endl;

        }
    };

    void show(){
        cout<<"hello word from the inner class!"<<endl;

    }
};

int main(){
    outer outer;

outer::inner inner;
    outer.show();
    inner.display();


    return 0;
}
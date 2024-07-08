#include<iostream>
using namespace std;

class sample{

    public:
    sample(){

        cout<<"constructor called!"<<endl;

    }
    

    ~sample(){

        cout<<"destructor called!";


    }
};

int main(){

    cout<<"creating object s1"<<endl;
sample s1;
{

    cout<<"creating object s2 inside a block"<<endl;
    sample s2;

}

cout<<"exiting main function"<<endl;

return 0;
}
#include<iostream>
using namespace std;

class encap{
    private:
    int age;
    void show(){
        cout<<"ALI"<<endl;

    }

    

    public:

    string name;
    void setvalue(int a){
        show();

        age=a;
        cout<<age<<endl;
    }
};

int main(){

    encap e;
    e.name="ALI";
    e.setvalue(23);
    cout<<e.name;
    return 0;
}
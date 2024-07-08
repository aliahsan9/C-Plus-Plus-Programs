#include<iostream>
using namespace std;

class person{
    private:
    string name;
    int age;
    string address;
public:
    void input(){

        cout<<"enter a name:";
        cin>>name;

        cout<<"enter an age:";
        cin>>age;

        cout<<"enter an address:";
        cin>>address;

    }
    void show(){
        cout<<"name:"<<name<<endl;

        cout<<"age:"<<age<<endl;

        cout<<"address:"<<address<<endl;


    }
};
int main(){

    person ali,ahsan, ahmed;

    ali. input();
    ali. show();
    ahsan. input();
    ali. show();
    ahmed. input();
    ahmed. show();


    return 0;
}


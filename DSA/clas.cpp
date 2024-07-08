#include<iostream>
using namespace std;

 class person {
   
    private:

    int age;
    string address;
    string name;
    public:

    void input(){

        cout<<"enter an age:";
        cin>>age;

        cout<<"enter an address:";
        cin>>address;

        cout<<"enter a name:";
        cin>>name;


 
    }

    void show(){
        cout<<"name:"<<name<<endl;

        cout<<"address:"<<address<<endl;

        cout<<"age:"<<age<<endl;

    }
};

int main(){

    person ali, ahsan, ahmed;

    ali.input();
    ali.show();
    ahsan.input();
    ahsan.show();
    ahmed.input();
    ahmed.show();
    

    return 0;

}
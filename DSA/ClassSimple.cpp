#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    string address;
    public:

void input(){
    cout<<"Enter the Name of Person: ";
    cin>>name;
    cout<<"Enter the Age of the Person: ";
    cin>>age;
    cout<<"Enter the Address of the Person: ";
    cin>>address;
}
void show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<address <<endl;
}
};
int main(){
    person Ali, Ahsan,Ahmad;
    Ali.input();
    Ali.show();
    Ahsan.input();
    Ahsan.show();
    Ahsan.show();
    Ahmad.input();
    Ahmad.show();
    return 0;
} 

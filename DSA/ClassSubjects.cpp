#include<iostream>
using namespace std;
class marks{
    private:
    string name;
    int rollno;
    int arr[3];
    public:
    void getinput(){
        cout<<"Enter ].the Student Name:";
        cin>>name;
        cout<<"Enter the Student Roll Number:";
        cin>>rollno;
        cout<<"Enter the Marks of Three Subjects:";
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }    
        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollno<<endl;
            for(int i=0;i<3;i++){
                cout<<"Marks: "<<marks<<endl;
            }
        }
    }
};
int main(){
    marks obj;
    obj.getinput();
    obj.show();
    return 0;
}
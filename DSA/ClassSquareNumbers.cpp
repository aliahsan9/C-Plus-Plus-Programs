#include<iostream>
using namespace std;
class square{
    private:
    int a,b;
    public:
    void getinput(){
        cout<<"Enter the Two Numbers: ";
        cin>>a>>b;
        }
        void displaysquare(){
            cout<<"Square of Both Numbers is: "<<a*a<<" and "<<b*b<<endl;
        }
    };
    int main(){
          square obj;
        obj.getinput();
        obj.displaysquare();

    return 0;
}
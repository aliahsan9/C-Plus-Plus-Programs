#include<iostream>
using namespace std;
class car{

    bool startengine;
    public:
    car():startengine(true){}


    void start(){
        cout<<"engine started:"<<endl;

    }
    void drive(){

        if (startengine){
            cout<<"you are ready to drive:";

        }else{
            cout<<"cannot drive the car";

        }
    }
};
int main(){

    car c;
    c.start();
    c.drive();
    

    return 0;
}
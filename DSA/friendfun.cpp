#include<iostream>
using namespace std;

class ali;
class ahsan{
    private:
    int money=10;
    friend void ahmad(ali, ahsan);

};

class ali{
    private:
    int money=20;
    friend void ahmad(ali, ahsan);
};
    void ahmad (ali r1, ahsan r2){
        cout<<"sum:"<<r1.money+r2.money<<endl;

    }

int main(){
    ali obj1;
    ahsan obj2;
    ahmad(obj1, obj2);


    return 0;
}
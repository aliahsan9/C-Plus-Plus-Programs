#include<iostream>
using namespace std;
class objectcounter{

    private:
    static int count;

    public:


objectcounter(){

    count++;
}

static int getcount(){
    return count;

}
};

int objectcounter::count=0;

int main(){

    objectcounter obj1;
    objectcounter obj2;

    objectcounter obj3;
    


    cout<<"number of objects created:"<<objectcounter::getcount()<<std::endl;

    return 0;
}
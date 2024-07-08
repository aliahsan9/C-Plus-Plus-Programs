#include<iostream>
using namespace std;

class Circle{
    private:

    double radius;
    public:

    void get_radius(double r){
radius =r;

    }

    void area (){
        double area=3.14159*radius*radius;
        cout<<"The area of the circle is:"<<area<<endl;


    }
    void circum(){

        double circumference =2*3.14159*radius;
        cout<<"The circumference of the circle is:"<<circumference<<endl;


    }
    
};
int main(){
    Circle obj;

    obj.get_radius(5);
    obj.area();
    obj.circum();

    return 0;
}
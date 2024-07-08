#include<iostream>
using namespace std;

class array{
    private:
    int arr[5];
    public:

    void fill();
    void display();
    int max();
    int min();


};

void array::fill(){
    cout<<"enter 5 integer values:"<<endl;
    for(int i=0;i<5;++i){
        cin>>arr[i];

    }
}

void array::display(){

    cout<<"the array values are:";
    for(int i=0;i<5;++i){
        cout<<"arr[i]"<<" ";

    }
    cout<<endl;;
    


}

int array::max(){
    int maxvalue=arr[0];
    for(int i=1;i<5;++i){

        if(arr[i]>maxvalue){

            maxvalue=arr[i];
        }
    }
    return maxvalue;
}
int array::min(){

    int minvalue=arr[0];

    for(int i=1;i<5;++i){
        if (arr[i]<minvalue){

            minvalue=arr[i];

        }
    }

        return minvalue;


    }

    int main(){

        array a;
        a.fill();
        a.display();

        cout<<"the maximum vaue is:"<<a.max()<<endl;

        cout<<"the minimi=um value is:"<<a.min()<<endl;

    
        return 0;
    
}
#include<iostream> 
using namespace std;
int main(){
    int numbers[5],sum=0;

    cout<<"enter 5 numbers:"<<endl;
    for(int i=0;i<5;++i){
        cin>>numbers[i];
        sum+=numbers[i];

    }
    double average=static_cast<double>(sum)/5;

cout<<"sum:"<<sum<<endl;
cout<<"average:"<<average<<endl;


return 0;

}
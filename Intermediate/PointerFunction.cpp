#include<iostream>
using namespace std;
void swap(int *a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n1 , n2;
    cout<<"enter two numbers:";
    cin>>n1>>n2;
      cout<<"values before swapping:";
      cout<<"n1:"<<n1<<endl;
      cout<<"n2:"<<n2<<endl;
      swap(&n1 ,&n2);
      cout<<"values after swapping:"<<endl;
      cout<<"n1:"<<n1<<endl;
      cout<<"n2:"<<n2<<endl;

      return 0;
}
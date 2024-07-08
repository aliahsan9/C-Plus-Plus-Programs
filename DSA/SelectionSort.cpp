#include<iostream>
using namespace std;

int arr[5]={5,4,6,3,1},n=5;

void selectionsort(){

    for(int i=0;i<n;i++){

        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){

             min=j;
          
            }
        }
        if(min!=i){
        int temp=arr[min];                                             
        arr[min]=arr[i];
        arr[i]=temp;
        }
    }
}
void print(){
    for(int k=0;k<n;k++){      
        cout<<arr[k]<<endl;
    }
}
int main (){

    cout<<"elements before selectionsorting:"<<endl;
    print();

    selectionsort();
    cout<<"eleemnts after selectionsorting:"<<endl;
print();
    return 0;
}
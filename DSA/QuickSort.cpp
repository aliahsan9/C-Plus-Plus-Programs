#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[], int low, int high){

    int pivot=arr[high];
    int i=(low-1);

    for(int j=low; j<=high-1;j++){

        if(arr[j]<=pivot){   

            i++;                 
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void quicksort(int arr[], int low, int high){

    if(low<high){ 

        int pi=partition (arr,low,high);

        quicksort(arr,low,pi-1);     


        quicksort(arr,pi+1,high);

    }
}
void printarr(int arr[], int size){
    for(int i=0;i<size;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){

    int arr[]={9,7,5,4,2};

    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"unsorted arrar:";
    printarr(arr,n);

    quicksort(arr,0,n-1);

    cout<<"sorted array:";

    printarr(arr,n);

    return 0;
}
#include<iostream>
using namespace std;

unsigned long long int findmax(int arr[3][2]){
    int maxval=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>maxval){
                maxval=arr[i][j];

            }
        }
    }
 return   maxval;

}
int main(){
    int arr[3][2];
        cout << "Enter values for a 3x2 array:" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];

        }
    }

    int maxval=findmax(arr);
    cout<<"maximum value in the array :"<<maxval<<endl;

    return 0;
}
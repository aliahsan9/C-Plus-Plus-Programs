#include,iostream
using namespace std;
bool getbit(int n, int pos){
    return ((n&(1<<pos)!)=0);
}
int unique(int arr[],int n){
for(i=0;i<64;i++){
int sum=0;
for(int j=0;j<n;j++)
if getbit(arr[j].i)
sum++;

}
}if (sum%n!=0){
result=setbit(result,i);
}
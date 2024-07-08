 #include<iostream>
 using namespace std;
 int arr[10],n,x;
 int binarysearch(int low,int high)
 {
    if(low>high){
        return -1;
    }
    else{
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }                     

        else if(arr[mid]>x){
            return binarysearch(low,mid-1);  
        }else{
            return binarysearch(mid+1,high);
        }
    }
 }
 int main(){
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<"enter a number to search in array:";
cin>>x;
int result = binarysearch(0,n-1);
if (result==-1){
    cout<<"elements are not found in an array:";

}else{

    cout<<"element found at index:"<<result<<endl;
}
return 0;

 }  
 
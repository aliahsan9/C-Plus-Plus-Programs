#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int value=remove("C:\\Users\\Fast Computers\\Desktop\\File.txt");
    if(value==0){
        cout<<"File is Deleted!";

    }else{
        cout<<"File is not Deleted!";
        return 0;
    }
}
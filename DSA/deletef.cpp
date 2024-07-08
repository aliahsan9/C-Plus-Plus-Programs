#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int value=remove("c:\\users\\fast computers\\desktop\\file.txt");

    if(value==0){
        cout<<"file is deleted!!";

    }else{
        cout<<"fie is not deleted!!";

    }
}
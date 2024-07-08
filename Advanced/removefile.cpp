#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int value=remove("C:\\Users\\Fast Computers\\Desktop\\ALI NOHANA.txt");
    if(value==0){
        cout<<"file deleted!!";

    }else{
        cout<<"file not deleted!!";

    }


}   
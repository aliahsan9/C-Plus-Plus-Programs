#include<iostream>
using namespace std;
void myfunction(string country="Norway"){
    cout<<country<<endl;
}
int main(){
    myfunction("Pakistan");
    myfunction("India");
    myfunction();
    myfunction("Turkey");
    return 0;
}

  #include<iostream>
  using namespace std;
  inline int fun(int a, int b, int c){
    return a+b+c;

  }
  int main(){
    int value=fun(23,43,54);

    cout<<value;
    return 0;
  }
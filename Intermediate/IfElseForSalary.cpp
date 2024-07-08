 #include<iostream>
 using namespace std;
  int main(){
    int sal;
    float net;
    cout<<"enter your salary:";
    cin>>sal;
   if(sal==20000){
    net=sal-(sal* 7/100);
    cout<<"netsalary"<<" ="<<net<<endl;
   }

    return 0;
  }
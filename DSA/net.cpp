#include<iostream>
 using namespace std;
int  main(){
      int sal;
      float net;
      cout<<"enter the amount of sal:";
      cin>>sal;
if(sal>=20000){
    net=sal-(sal*7/100);
}else
if(sal>=10000)
{
    net =sal-1000;
}else
if(sal<10000)
{
    net=sal;
}
cout<<"your net sal is"<<" = "<<net<<endl;

      return 0;

}
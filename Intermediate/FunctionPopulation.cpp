#include<iostream>
using namespace std;
struct Population
{
    string  country;
    float pop;
};
void countrypopulation(string country, float pop){
    cout<<"Country Name and Population: "<<endl;
    cout<<"Country Name: "<<country<<endl;
    cout<<"Country Population: "<<pop<<endl;
}
int main(){
    Population countrypop;
    countrypop.country;
    countrypop.pop;
    string country;
    float pop;
    cout<<"Enter the name of the country: ";
    cin>>country;
cout<<"Enter the population of the country in millions: ";
cin>>pop;
  countrypopulation(country , pop);
return 0;
}
#include<iostream>
using namespace std;
struct Cricket
{
    string playername;
    int runs;
    int innings;
    int timesnotout;
};
void cricketdetail(){
    cout<<"CRICKETER'S TABLE"<<endl;
}
int main(){
    Cricket Cricket;
    Cricket.playername;
    Cricket.runs;
    Cricket.innings;
    Cricket.timesnotout;
    string playername1;
    int runs1;
    int innings1;
    int timesnotout1;
    string playername2;
    int runs2;
    int innings2;
    int timesnotout2;
    string playername3;
    int runs3;
    int innings3;
    int timesnotout3;
    string playername4;
    int runs4;
    int innings4;
    int timesnotout4;
    
    cout<<"Enter the Name of the Player1: ";
    cin>>playername1;
       cout<<"Enter the Runs of the Player1: ";
    cin>>runs1;
       cout<<"Enter the innings of the Player1: ";
    cin>>innings1;
       cout<<"Enter the timesnotout of the Player1: ";
    cin>>timesnotout1;
     cout<<"Enter the Name of the Player2: ";
    cin>>playername2;
       cout<<"Enter the Runs of the Player2: ";
    cin>>runs2;
       cout<<"Enter the innings of the Player2: ";
    cin>>innings2;
       cout<<"Enter the timesnotout of the Player2: ";
    cin>>timesnotout2;
     cout<<"Enter the Name of the Player3: ";
    cin>>playername3;
       cout<<"Enter the Runs of the Player3: ";
    cin>>runs3;
       cout<<"Enter the innings of the Player3: ";
    cin>>innings3;
       cout<<"Enter the timesnotout of the Player3: ";
    cin>>timesnotout3;
     cout<<"Enter the Name of the Player4: ";
    cin>>playername4;
       cout<<"Enter the Runs of the Player4: ";
    cin>>runs4;
       cout<<"Enter the innings of the Player4: ";
    cin>>innings4;
       cout<<"Enter the timesnotout of the Player4: ";
    cin>>timesnotout4;
    
    cricketdetail();
    cout<<"PlayersNames "<<"Runs "<<"Innings "<<"TimesNotOut "<<endl;
    cout<<playername1<<"          "<<runs1<<"      "<<innings1<<"       "<<timesnotout1<<endl;
    cout<<playername2<<"          "<<runs2<<"      "<<innings2<<"       "<<timesnotout2<<endl;
    cout<<playername3<<"          "<<runs3<<"      "<<innings3<<"       "<<timesnotout3<<endl;
    cout<<playername4<<"          "<<runs4<<"      "<<innings4<<"       "<<timesnotout4<<endl;
    
    return 0;
}
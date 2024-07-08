#include<iostream>
using namespace std;

struct book{
    string title;
    string auther;
    int year;

};

int main(){
      book book;

    book* ptr= &book;

    cout<<"enter the title of the book:";
    cin>>ptr->title;

    cout<<"enter the auther of the book:";
    cin>>ptr->auther;

    cout<<"the year when it was published:";
    cin>>ptr->year;

    cout<<"book detaile";

    cout<<"title:"<<ptr->title<<endl;
    cout<<"auther:"<<ptr->auther<<endl;
    cout<<"year:"<<ptr->year<<endl;
    
    
    return 0;
}

#include<iostream>
using namespace std;

struct book{
    string title;
    string author;
    int year;

};

int main(){

    book mybook;
book* ptr=&mybook;

    cout<<"enter the title of the book:";
    cin>>ptr->title;

cout<<"enter the name of author:";
cin>>ptr->author;

cout<<"enter the year of publishing:";
cin>>ptr->year;

cout<<"\nbook details:\n";
cout<<"title:"<<ptr->title<<endl;

cout<<"author"<<ptr->author<<endl;

cout<<"year :"<<ptr->year<<endl;

return 0;
}
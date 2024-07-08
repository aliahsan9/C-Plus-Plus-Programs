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
    cout<<"enter the author of the book:";
    cin>>ptr->author;

    cout<<"enter the year of the book published:";
    cin>>ptr->year;



    cout<<"\nbook details:";
    
    cout<<"title:"<<endl;
    
    cout<<"author:"<<endl;
 

    cout<<"year of the book published:";


    return 0;
}
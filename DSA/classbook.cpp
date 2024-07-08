#include<iostream>
using namespace std;

class Book{
    private:

    int Bookid;
    int pages;
    double price;
    public:

    void get(){
        cout<<"enter the bookid:"<<endl;
        cin>>Bookid;

        cout<<"pages:"<<endl;
        cin>>pages;

        cout<<"enter the book price:"<<endl;
        cin>>price;

            }

            void show(){

                cout<<"book id:"<<Bookid<<endl;
                cout<<"pages:"<<pages;
                cout<<"book price: $"<<price<<endl;

            }

            void set(int id, int p, int pr){
                Bookid =id;
                pages=p;
                price=pr;

            }
            double getprice(){
                return price;

            }
};

int main(){
Book book1, book2;
cout<<"enter the details for the first book:"<<endl;
book1.get();

cout<<"enter the details for the second book:"<<endl;
book2.get();

cout<<"details of the costliar book:"<<endl;

if(book1.getprice()>book2.getprice()){

    book1.show();

}else{

    book2.show();

}

return 0;

}
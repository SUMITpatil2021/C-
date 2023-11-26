# include<iostream> 
#include<string.h>
using namespace std;

class Book
{
    static int cnt;
     int bid; 
    char *bname;
    float price;
    public:
    Book();
    Book(const char*,float);// parameterized constructor
    Book(Book &); // copy constructor
    ~Book();
    void display();

};
int Book::cnt=0; // static instatniation 

Book::Book() // default constructor 
{
    cnt++;
    bid=cnt;
   // strcpy(bname,"NA");
   bname=new char[1];
   bname[0]='\0';
    // bname ="NA";
    price=0.00; 
}

Book::Book(const char *nm,float p) // parameterized constructor 
{
    cnt++;
    bid=cnt;
    bname=new char[strlen(bname)+1];
    strcpy(this->bname,nm);
    price=p;
} 

Book::Book(Book &obj) // copy constructor 
{
    this->cnt++;
    this->bid=obj.cnt;  
    this->bname=new char[strlen(bname)+1];
    strcpy(this->bname,obj.bname);
    this->price=obj.price;

} 

Book::~Book() // destructor 
{
    delete [] bname;
} 
 
 void Book::display() // display 
 {
    cout<<endl<<"Book ID:"<< bid<<"\t Book Name:"<<bname<<"\t Book Price:"<<price;
 }
 
 int main()
 {
    Book b1;
    b1.display(); 

    Book b2("Yugandhar",1000);
    b2.display();

    Book b3("C++ programming ",500);
    b3.display(); 

    Book b4(b3);
    b4.display();

    return 0;

 }



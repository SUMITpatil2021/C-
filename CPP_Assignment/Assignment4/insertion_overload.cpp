#include<iostream>
#include<string.h>
using namespace std;

class cstring
{
    int len; // data member to store length of string 
    char *str; // char pointer to store the string 
    
    public:
    // declaration of  all the  member functions 
    cstring(); // default constructor declaration
    cstring(const char*);  // parameterized constructor declaration
    cstring(cstring &); // copy constructor declaration
    ~cstring(); // deconstructor declaration 
        friend istream & operator>>(istream &,cstring &);
 
    friend ostream & operator<<(ostream &,cstring &);

    void display()
    {
        cout<<endl<<"length of string :"<<len<<"\n  string:"<<str;
    }

};
/****************** default constructor*********************************/
cstring::cstring()
{
    len=1;
    str=new char[len];
    str[0]='\0';
}
/***************parameteriezed constructor with string ******************/
cstring::cstring(const char *str)
{
    this->len=strlen(str); // calculate length and save it 
    this->str=new char[this->len+1]; //memory allocation dyanamicaly accordig to length of string + 1
    strcpy(this ->str,str); //copy the string which is passed from main into class using this opearator
}


/*************copy constructor *********/
cstring::cstring(cstring &s) // while using copy constructor use always reference variable for storing that object 
{
   this->len=s.len; // length of string which is in one of the object is stored on length of class 
   this->str=new char[this->len+1]; // allocation of memory dyanamically according to length 
   strcpy(this->str,s.str);  // copy string from object to another 
}  

  cstring::  istream & operator >>(ostream & in,cstring & c)
    {
        char temp[20];
        in>> temp;
        c.len=strlen(temp);
        s.str=new char[c.len+1];



    }
     ostream & operator<<(ostream & o,cstring &c)
    {
       o<<c.str;
       return o;
    }

/*********** destructor**********/
cstring::~cstring()
{
    delete[] str; // delete the memory allocated 
}

int main()
{
 cstring c1("Sumit"); // string stored on c1 object 
cout<<c1;
}

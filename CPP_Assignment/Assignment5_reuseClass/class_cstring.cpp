#include<iostream>
#include<string.h>
using namespace std;


class cstring
{
    int len;
    char *str;
    public:
    cstring();
    cstring(const char *);
    cstring(cstring &);
    bool operator<(cstring &);
    bool operator==(cstring &);
    cstring operator=(cstring &);
    char operator[](int );
    ~cstring(); 
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


/*********operator overload function for >*****/


bool cstring::operator<(cstring &o)
{
//  int temp1;

  if(this->str < o.str)
  {
      return true;
  }
  else
  {
    return false;
  }
}



/******** overload function for == operator **********/
bool cstring::operator==(cstring &o)
{
    if(this->str==o.str)
    {
        return true;
    }
    else
    {
        return false;
    }


} 

/********overload function for = operator ********/

cstring cstring:: operator=(cstring &o)
{
    this->len=o.len;
    this->str=new char[this->len+1];
    strcpy(this->str,o.str);
    return *this;
} 
/*************overload function for [] operator *****/

char  cstring:: operator[](int pos)
{
    if(pos>=0 && pos <this->len)
    {
        return str[pos];
    }
}
/*********** destructor**********/
cstring::~cstring()
{
    delete[] str; // delete the memory allocated 
} 

int main()
{

 cstring c1("Sumit SP"); // string stored on c1 object 
 c1.display();

 cstring c2=c1;  // copy constructor calling  , it will copy string which is in c1 to another object c2
 c2.display(); // display the string which is copied 

 cstring c3("Patil");
 cstring c4(c3);
 c4.display(); 

 if(c1<c2)
 {
    cout<<endl<<"C2 is greater than c1";
 }
 else
 {
    cout<<endl<<"c1 greater than c2";
 } 

 if(c1==c2)
 {
    cout<<endl<<"c1 and c2 are same ";
 }
 else
 {
    cout<<endl<<"c1 and c2 are not equal ";
 } 

 cstring c5("SUMIT");
 char ch;
 ch=c5[3];
 cout<<endl<<"character is :"<<ch;

 return 0;
}

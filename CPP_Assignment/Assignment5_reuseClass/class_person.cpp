#include<iostream>
#include<string.h>
using namespace std;


class date
{
    int day,month,year;
    public:
    date();
    date(int,int,int); 
   void display()
    {
        cout<<endl<<day<<"/"<<month<<"/"<<year;
    }
}; 

date::date() // default for date class 
{
   day=month=year=0;  
}  

 date::date(int d,int m,int y) // parameterized for date class 
 {
    day=d;
    month=m;
    year=y;
 }




/**********class cstringgg***************/
class cstring
{
    int len;
    char *str;
    public:
    cstring();
    cstring(const char *);
    cstring operator=(cstring &);
    ~cstring();
 void display()
    {
        cout<<endl<<"length of string :"<<len<<"\n  string:"<<str;
    }    

};   

cstring::cstring() // default for cstring 
{
    len=1;
    str=new char[1];
    str[0]='\0';

}
/**********parameteriezed constructor of cstring class  ****/
cstring::cstring(const char *str)
{
    this->len=strlen(str);
    this->str=new char[this->len+1];
    strcpy(this->str,str);

} 
/*******overload operotr =  ***************/
cstring cstring::operator=(cstring & obj)
{
    // cstring temp;
    this->len=obj.len;
    this->str=new char[this->len +1];
    strcpy(this->str,obj.str);
    // this->.name=new char[st];
    return *this;
}  

/**********destructor ****************/
cstring::~cstring()
{
    delete[]str;
}




/*********class person**************/
class person
{
    cstring name;
    date bdate;
    public:
    person();
    person(const char* ,int,int,int); 
    
    void display();
   
    }; 



person::person() // default for person 
{
}


person::person(const char*str,int d,int m,int  y):name(str),bdate(d,m,y) // parameterized for person 
{
    
} 



void person::display() 
{
    name.display();
    bdate.display();

}  
// void person::display()
// {
//     cout<<endl<< "Name:"<<name<<"DOB:"<<day<<" / "<<month<<" / "<<year;
// }

int main()
{
    person p1;
    p1.display();

    person p2("sumit",21,2,2001);
    p2.display(); 
    return 0;
}

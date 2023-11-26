#include<iostream>
#include<string.h>
using namespace std; 

class date
{
    int dd,mm,yy; 
    public:
    date();
    date(int,int,int);
   void   setDate(int,int,int); 
   void display();
    // void getbDate(); 

    // int setjdate(int,int,int);
    // void getjdate();


};
  
date::date()
{
    dd=mm=1;
    yy=2001;
}

date::date(int d,int m,int y)
{
    dd=d;
    mm=m;
    yy=y;
}

 void date::setDate(int d,int m,int y)
 {
   dd=d;
   mm=m;
   yy=y;
 }

 void date::display()
 {
    cout<<dd<<"/"<<mm<<"/"<<yy;
 } 
//  int date::setjdate(int d1,int m1,int y1)
//  {
//     dd=d1;
//     mm=m1;
//     yy=y1;
//  } 

//  void date::getbDate()
//  {
//     cout<<endl<<"Birth Date :"<<dd<<"/"<<mm<<"/"<<"yy";
//  } 

//  void date::getjdate()
//  {
//     cout<<endl<<"Date of admission :"<<dd<<"/"<<mm<<"/"<<yy;
//  } 
 

 /*****************student class***************/
 class student
 {
    int len;
    static int rn;
    char name[20]; 
    date bdate,adate;
    public: 
    student();
    student(const char [],int,int,int,int,int,int);
    //  void setRollNum(int );
    void setName(const char*);
    void setBdate(int,int,int);
    void setAdate(int,int,int);
    //  ~student();
    void display();
 }; 
 int student::rn=0; // static instaniation of static variable which holds students roll number 



//default constructor of student class 
student::student()
{
    rn=0;
    //  len=1;
    // name=new char[1]; // used for dyanamic allocation or for string pointer
    name[0]='\0';
}

// parameterized constructor for student class with membership operator 
  student::student(const char nm[20],int d,int m,int y,int d1,int m1,int y1) : bdate(d,m,y),adate(d1,y1,m1)

{
    rn++;
    // this->len=strlen(name);
    // this->name=new char[this->len+1]; // for string pointer 
    strcpy(name,nm);

} 
 

//  void setRollNum(int r)
//  {
//     int roll_num=r;
//  }


// for setting name of student
void student::setName(const char*str) 
{
    rn++;
    strcpy(name,str);
}


// for setting admission date of student
void student::setAdate(int d,int m,int y) 
{
    adate.setDate(d,m,y);
}



// for setting students's date of birth 
void student::setBdate(int d,int m,int y) 
{
    bdate.setDate(d,m,y);
}

// destructor for student class 
// student::~student() 
// {
//     delete[] name;
// } 


// display function of student class 

void student::display() 
{
    cout<<endl<<"roll num: "<<rn<<"\t Student Name:"<<name<<"\t Date of birth:";
    bdate.display();
    cout<<"\t Date of admission :"; 
    adate.display();

    
}  

int main()
{
    int d1,m1,y1,d2,m2,y2;
    char name[20];
    student s[2];
    for(int i=0;i<2;i++)
    {
    //    cout<<endl<<"Student Roll number:";
    //    cin>>rn;
        cout<<endl<<"Student Name: ";
        cin>>name;
        cout<<endl<<"Date of birth :";
        cin>>d1>>m1>>y1;

        cout<<endl<<"Date of Admission:";
        cin>>d2>>m2>>y2; 
        // s[i].setRollNum(rn);
        s[i].setName(name);
        s[i].setBdate(d1,m1,y1);
        s[i].setAdate(d2,m2,y2);

    }

    for(int i=0;i<2;i++)
    {
        s[i].display();
    }
}

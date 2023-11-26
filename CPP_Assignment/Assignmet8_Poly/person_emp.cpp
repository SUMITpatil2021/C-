#include<iostream>
#include<string.h>
using namespace std;
/***** parent class or base class ***********/
class person
{
    int age;
    char name[20];
    public:
    person();
    person(const char*,int);
    virtual void  display()
    {
    cout<<"\t Person name:"<<name;
    cout<<"\t person's age: "<<age;
}
};

person::person() // default constructor 
{
    age=0;
    strcpy(name,"NA");

} 
person::person(const char*n,int ag)
{
    strcpy(name,n);
    age=ag;
}

// void person::display()





/***********derived class of base class person************************/
class employee:public person
{
    int eid;
    protected:  double salary;
    public:
    employee();
    employee(int,const char*,int,double);
    void display(); 
    virtual void calculateSal()=0;
   
};

employee::employee():person()
{
    eid=0;
    salary=0;
}

employee::employee(int e,const char *nm,int a,double sal) : person(nm,a)
{
    eid=e;
    salary=sal;
}

void employee::display()
{
    cout<<endl<<"\t Employee ID:"<<eid;
    person::display();
    cout<<"\t Employee salary="<<salary;
}   


 /********* derived class of base class employee for wage Employee ***********/
class wageEMP:public employee
{
    int hour;
    double rate;
    public:
    wageEMP();
    wageEMP(int,const char*,int,double,int,double);
    void   calculateSal();
    void display();
};

wageEMP::wageEMP(): employee()
{
 
    hour=0;
    rate=0;
}

wageEMP::wageEMP( int e,const char*n,int a,double sal,int hr,double ra):employee(e,n,a,sal)

{
    hour=hr;
    rate=ra;
}

void  wageEMP::calculateSal() 
{
    double wage=salary+(hour*rate);
    // return wage;
  cout<<"\t Salary of wage employee :"<<wage;
}  

void wageEMP::display()
{
    employee::display();
    cout<<"\t Hours : "<<hour;
     cout<<"\t rate : "<<rate;
} 

 /************derived class of base class employee for salesperon *********/
class salesperson: public employee
{
  int num_sale;
  double com;
  public:
  salesperson();
  salesperson(int,const char*,int,double,int,double );
  void calculateSal();
  void display()
  {
    employee::display();
    cout<<"\t no.of sales: "<<num_sale;
    cout<<"\t cummision : "<<com;
  }

};

salesperson::salesperson() : employee()
{
    num_sale=0;
    com=0;
}


salesperson::salesperson(int e,const char*n,int a,double sal,int num,double co):employee(e,n,a,sal)
{
    num_sale=num;
    com=co;
}

void salesperson::calculateSal()
{
    double sal=salary+(num_sale*com);
    cout<<"\t Salary of sales person is:"<<sal;
}    
 

 
 /************** derived class of base class employee for manager *******/
class manager: public employee
{
  int TA,HRA;
  
  public:
  manager();
  manager(int,const char*,int,double,int,int );
  void calculateSal();
  void display()
  {
    employee::display();
    cout<<"\t TA: "<<TA;
    cout<<"\t HRA : "<<HRA;
  }

};

manager::manager() : employee()
{
    TA=0;
    HRA=0;
}


manager::manager(int e,const char*n,int a,double sal,int t,int h):employee(e,n,a,sal)
{
    TA=t;
    HRA=h;
}

void manager::calculateSal()
{
   
    cout<<"\t Salary of Manager  is:"<<salary+TA+HRA;
} 
 

 int main()
 {

//  wageEMP w1(101,"Sumit",22,50000,5,5.5); 
//  w1. wageEMP::display();
//  w1. wageEMP::calculateSal();


// salesperson s1(102,"Kunal",23,60000,5,10);
// s1. salesperson::display();
// s1.salesperson::calculateSal();

// manager m1(103,"Tushar",24,70000,35,50);
// m1.manager::display();
// m1.manager::calculateSal(); 

person *ptr; 

ptr=new person();
ptr->display();

// ptr=new employee();
// ptr->display();

ptr=new manager(103,"Tushar",24,70000,35,50);
ptr->display();  

ptr=new salesperson(102,"Kunal",23,60000,5,10);
ptr->display();

ptr=new wageEMP(101,"Sumit",22,50000,5,5.5);
ptr->display();




employee *e;

// e=new employee();

e=new manager(103,"Tushar",24,70000,35,50);
e->display();
e->calculateSal();

e=new salesperson(102,"Kunal",23,60000,5,10);
e->display(); 
e->calculateSal();

e=new wageEMP(101,"Sumit",22,50000,5,5.5);
e->display();
e->calculateSal();







 }





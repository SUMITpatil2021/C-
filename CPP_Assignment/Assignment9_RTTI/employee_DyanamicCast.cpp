#include<iostream>
#include<typeinfo>
#include<string.h>

using namespace std;

  void Check()
    {
        cout<<endl<<"In Employee Test fun";
    }

class Employee
{
    // char name[20];
    public:
   
   virtual  void display()
    {
        cout<<endl<<"In Employee display fun";
    } 

     virtual  void Test()
    {
       cout<<endl<<"IN Employee Test fun";
    }


}; 

class Programmer:public Employee
{
    public:
    void codig()
    {
        cout<<endl<<"In Programmer  coding fun";

    } 

    void display()
    {
        cout<<endl<<"In Programmer display fun";
    }

    void Test()
    {

        cout<<endl<<"In Programmer Test fun";
    } 

    void Check()
    {
                cout<<endl<<"In Programmer Check fun";

    }
};

class DataBaseAdmin:public Employee
{
    public:
    void CreateDataBase()
    {
        cout<<endl<<"In DataBaseAdmin CreateDateBase fun";

    }
        void display()
    {
        cout<<endl<<"In DataBaseAdmin display fun";
    }

    void Test()
    {

        cout<<endl<<"In DataBaseAdmin Test fun";
    }

    void Check()
    {
                cout<<endl<<"In DataBaseAdmin Check fun";

    }
};

class SystemAdmin:public Employee
{
   public:
   void SystemUpdate()
   {
        cout<<endl<<"In SystemAdmin SystemUpdate fun";

   }
       void display()
    {
        cout<<endl<<"In SystemAdmin display fun";
    }

    void Test()
    {

        cout<<endl<<"In SystemAdmin Test fun";
    } 
    void Check()
    {
                cout<<endl<<"In SystemAdmin Check fun";

    }
}; 

int main()
{
    Employee *e[5];  // create a pointer
    e[0]=new Programmer(); // assign memory for programmer 
    e[1]=new DataBaseAdmin(); // assign memory for programmer 
    e[2]=new SystemAdmin();// assign memory for  DataBaseAdmin
    e[3]=new Programmer();// assign memory for Programmer
    e[4]=new DataBaseAdmin();// assign memory for DataBaseAdmin
    
    
    for(int i=0;i<5;i++)  // for loop for invoking the functions 
    {
        e[i]->display();
        e[i]->Test();
       
        Programmer* p=dynamic_cast <Programmer*> (e[i]); // calling coding funtion from programmer explicitly 
       if(p!=NULL)
       {
        p->codig(); 
       }

        DataBaseAdmin* d=dynamic_cast<DataBaseAdmin*> (e[i]);  // calling createDatabse funtion from DataBaseAdmin explicitly
       if(d!=NULL)
       {
        d->CreateDataBase();
       }


        SystemAdmin* s= dynamic_cast<SystemAdmin*> (e[i]); // calling systemUpdate funtion from systemAdmin explicitly
        if(s!=NULL)
        {
        s->SystemUpdate();
        }

    }

}
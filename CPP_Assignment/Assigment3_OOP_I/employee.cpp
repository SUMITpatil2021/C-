#include<iostream>
using namespace std;

typedef struct Employee
{
    
        int employee_id;
        char employee_name[20];
        int salary;
   
        void accept()
        {
            cout<<endl<<endl<<"\n Enter employee_id,employee_name and salaray:";
            cin>>employee_id>>employee_name>>salary;

        }
        void display ()
        {
            cout<<"\n\t employee_id:"<<employee_id<<"\t employee_name:"<<employee_name<<"\t salary:"<<salary<<endl;

        } 
        

}EM;

int main()
{
    // Employee e1;
    // e1.accept();
    // e1.display();
    Employee Employees[2];
    int i;
    for(i=0;i<2;i++)
    {
        Employees[i].accept();
    }
     for(i=0;i<2;i++)
    {
        Employees[i].display();
    } 
    // cout<<"\n\n\n";
    return 0;

}
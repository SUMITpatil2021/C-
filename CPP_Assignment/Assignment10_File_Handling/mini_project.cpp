#include<iostream>
#include<string.h>
#include<fstream>

using  namespace std;

class Employee
{
    int eid;
    char name[20];
    double salary;
    public:
    Employee()
    {
        eid=0;
        strcpy(name,"NA");
    }

    Employee(int id,char *nm,double sal)
    {
        eid=id;
        strcpy(name,nm);
        salary = sal;
    }


        void accept()
        {
            cout<<endl<<"Enter Employee ID, Name and Salary:";
            cin>>eid>>name>>salary;
        }

        void display()
        {
            cout<<endl<<"Employee ID: "<<eid<<"Employee Name: "<<name<<"Salary : "<<salary;

        }
    void Add_Record()
    {
        ofstream fout("Employee.dat",ios::app|ios::binary);
        Employee e1;
        e1.accept();
        fout.write((char*)&e1,sizeof(Employee));
        fout.close();

    }

    void display_Record()
    {
        Employee e1;
        ifstream fin("Employee.dat",ios::binary);
        while(fin.read((char*) &e1,sizeof(Employee)))
        {
            e1.display();
        }
        fin.close();
    } 

    bool Seacrh(int eid)
    {
        bool res=false;
        Employee e1;
        ifstream fin("Employee.dat",ios::binary);
        while(fin.read((char*)&e1,sizeof(Employee))) 
        {
            if (e1.eid==eid)
            {
                e1.display();
                res=true;
            }
        } 
        fin.close();
        return res;   
    } 
    bool modify(int eid)
    {
        bool res=false;
        Employee e1.
    }
}; 



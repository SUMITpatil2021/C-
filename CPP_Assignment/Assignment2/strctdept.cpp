#include<iostream>
using namespace std;

typedef struct  department
{
    int did;
    char dname[20];
    
    void accept()
    {
        cout<<"\n Enter Department details Department ID, Department name";
        cin>>did>>dname;
    }
    void display()
    {
        cout<<"\n\t "<<did<<"\t"<< dname;
        
    }

}dept;

int main()
{
    int numofdept;
    dept *departments;

    int i;  
    cout<<"\n Enter number of Departments:";
    cin>>numofdept;

    departments=new dept[numofdept];
    for(i=0;i<numofdept;i++)
    {
    departments[i].accept();
    }
    for(i=0;i<numofdept;i++)
    {
    departments[i].display();
    }
    delete [] departments;
    cout<<"\n \n \n ";
return 0;
   

}

#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    int age;
    char name[20];
    public:

    Person() 
    {
        age=0;
        strcpy(name,"NA");
    } 

    Person(const char *name,int a)
    {
        age=a;
        strcpy(this->name,name);
    } 

    void display()
    {
        cout<<"\t Name :"<<name;
        cout<<"\t Age: "<<age;
    }

};

class EMP : public Person
{
   int eid;
   double salary;
   public:
   EMP()
   {
    eid=0;
    salary=0.00;
   }

   EMP(int id, const char *name,int a,double sal):Person(name,a)
   {
        eid=id;
        salary=sal;
   } 
   void display()
   {
    cout<<endl<<"Employee ID:"<<eid;
    Person::display();
    cout<<"\t Salaray: "<<salary;
   }
};

int main()
{
    // Person p1("Sumit",22);

    Person p1;
    p1.display();
     EMP e1;
     e1.display();

    EMP e2(101,"SUMIT",22,500000);
    e2.display(); 

    EMP e3(102,"TUSHAR",22,500000);
    e3.display();
}

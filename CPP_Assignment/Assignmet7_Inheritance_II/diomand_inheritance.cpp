#include<iostream>
using namespace std;

class A
{    public:
    virtual void display()
   {
    cout<<endl<<"Hii  I'm in class A";
   }
};

class B: virtual public A
{
    public:
    void display()
    {
        cout<<endl<<"hii I'm in class B which is child of clas A";
    }

};

class C: virtual  public A
    { 
        public:

     void display()
     {
        cout<<endl<<"hii I'm in class C which is child of Class A";
     }
    }; 

class D: public B,public C
{    
    public:
    void display()
    {
        cout<<endl<<"hii I'm in class D which is child of class B & C ";
    }
}; 

int main()
{
    A a1;
    a1.display(); 

    B b1;
    b1.display();
    C c1;
    c1.display();

    D d1;
    d1.display();

}
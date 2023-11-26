#include<iostream>
using namespace std;

class math1
{
    int x,y;
    public:
    void addition(int a,int b)
    {
        cout<<endl<<"Addition:"<<a+b;
    } 
    void substraction (int a,int b)
    {
        cout<<endl<<"Substraction:"<<a-b;
    } 
    void calculateArea(int r)
    {
        cout<<endl<<"Area of circle is:"<<3.14*r*r;
    }
}; 

class math2
{
    int x,y;
    public:
    void Multiplication(int a,int b)
    {
        cout<<endl<<"Addition:"<<a*b;
    } 
    void division  (int a,int b)
    {
        cout<<endl<<"Substraction:"<<a/b;
    } 
    void calculateArea(int s)
    {
        cout<<endl<<"Area of square  is:"<<s*s;
    }
}; 

int main()
{ 
    math1 m1;
    m1.addition(10,20);
    m1.substraction(10,20);

    m1.math1::calculateArea(4); 

    math2 m2;
    m2.Multiplication(10,20);
    m2.division(20,10);
    m2.math2::calculateArea(5);
      return 0;
}
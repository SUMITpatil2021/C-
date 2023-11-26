#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex();
    Complex(int,int);
    void display();
    Complex operator+(Complex &);
    Complex operator-(Complex &);
    Complex operator*(Complex &);
    Complex operator ++(int);// pre increment 
    Complex operator ++();


}; 

/**************** def for default constructor **************/
Complex::Complex()
{
    real=img=1;
} 

/******************def for parameterized constructor ******/

Complex::Complex(int r,int i)
{
    real=r;
    img=i;
} 

/*******************def for display ************************/

void Complex::display()
{
    if(img<0)
    {
        cout<<endl<<"["<<real<<","<<img<<"i]";
    }
    else{
        cout<<endl<<"["<<real<<","<<img<<"i]";
    }
}
 
 /****************def for overload + *********************/
 Complex Complex:: operator+(Complex & o)
 {
    Complex temp;
    temp.real=this->real+o.real;
    temp.img=this->img+ o.img;
    return temp;
 } 


 /****************def for overload - *********************/

  Complex Complex:: operator-(Complex & o)
 {
    Complex temp;
    temp.real=this->real-o.real;
    temp.img=this->img- o.img;
    return temp;
 }

 /****************def for overload * *********************/

  Complex Complex:: operator*(Complex & o)
 {
    Complex temp;
    temp.real=this->real*o.real;
    temp.img=this->img* o.img;
    return temp;
 } 

  /****************def for overload pre  *********************/
  Complex Complex::operator++(int a)
  {
    Complex temp;
    temp.real=this->real++;
    temp.img=this->img++;
    return temp;
  } 
/*****************def for overload post**********************/
   Complex Complex::operator++()
  {
    Complex temp;
    temp.real=this->real++;
    temp.img=this->img++;
    return temp;
  } 

  int main()
  {
    Complex c1;
    c1.display(); 
    
    Complex c2(2,3);
    c2.display();

    Complex c3;
    c3=c1 + c2;
    c3.display();
    
    Complex c4,c5,c6,c7,c8;
    c4=c1-c2;
    c4.display(); 

    c5=c1*c2;
    c5.display();

    c6=c1++;
    c6.display();

    c7=++c1;
    c7.display();

    
   

  }

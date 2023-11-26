#include<iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    Complex();
    Complex(int,int);
    void display()const;
    void getReal()const;
    void  getImg()const;
};

Complex :: Complex()
{
    real=1;
    img=1;
} 
Complex::Complex(int r,int i)
{
    real=r;
    img=i;
}

void Complex::display() const
{
    if(img<0)
    {
        cout<<endl<<real<<img<<"i";
    }
    else
    {
        cout<<endl<<real<<"+"<<img<<"i";
    } 
}

    void Complex::getReal()  const

    {
       cout<<endl<<real;
    }
    void Complex::getImg()  const
    {
    cout<<endl<<img;
    }
 

int main()
{
    Complex c1;
    c1.display();
     c1.getReal() ;
     c1.getImg() ;

    Complex c2(2,-3);
    c2.display();
    c2.getReal();
    c2.getImg(); 

    const Complex c3;
    c1.display();
    c1.getReal();
    c1.getImg();

}



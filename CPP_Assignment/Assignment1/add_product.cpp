#include<iostream>
using namespace std;

int calculate(int&,int&,int &,int & );
int main()
{
    int num1,num2,add,mul;
    cout<<"\n Enter two Numbers:";
    cin>>num1>>num2;
    calculate(num1,num2,add,mul);
    cout<<"\n Addition of entered number is:"<<add;
    cout<<"\n multiplication of entered number is:"<<mul;
}

int calculate(int &a, int &b,int &c,int &d)
{
   c=a+b;
   d=a*b;
}
#include<iostream>
using namespace std;

void mul(int=1,int=1,int=1);
int main()
{
    mul(10);
    mul(10,20);
    mul();
}

void mul(int a, int b, int c)
{
    cout<<"\n Multiplication is :"<<a*b*c;
}
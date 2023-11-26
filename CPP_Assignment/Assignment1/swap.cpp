#include<iostream>
using namespace std;

void swap(int &,int &);
int main()
{
    int num1=10,num2=20;
    cout<<"\n"<< num1<<" " <<num2;
    swap(num1,num2);
    cout<<"\n" <<num1<<" "<<num2;
}

void swap(int &p, int &q)
{
    int temp=0;
    temp=p;
    p=q;
    q=temp;
}

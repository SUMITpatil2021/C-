#include<iostream>
using namespace std;

template<class T>
void Swap(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int num1=10,num2=20;
    cout<<endl<<num1<< "\t "<<num2;
    Swap(num1,num2); 
    cout<<endl<<num1<<"\t"<<num2;
    char ch1='P', ch2='S';
    cout<<endl<<ch1<<"\t"<<ch2;
    Swap(ch1,ch2);
    cout<<endl<<ch1<<"\t"<<ch2;

    return 0;
}
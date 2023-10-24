#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int num;
    cout<<endl<<"Enter a number:";
    cin>>num;
    int factorial=fact(num);
    cout<<endl<<"Factorial of "<<num<<" is:"<<factorial; 
    return 0;
}

int fact(int a)
{
    int temp=1;
    for(int i=1;i<=a;i++)
    {
        temp=temp*i;
    } 
     return temp;

}
#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<< "\n Enter a number: ";
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num % i==0)
        {
            cout<<" Number is Not Prime";
            break;
        }

    }
    if(i==num)
    {
        cout<<"Number is Prime";
    }
}



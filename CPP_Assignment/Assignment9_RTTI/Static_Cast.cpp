#include<iostream>
using namespace std;

int main()
{
    int a=11;
    float b; 
    // cout<<endl<<b;

    b=(float) a/2;  
    cout<<endl<<b;
    b= static_cast<float> (a)/2;
    cout<<endl<<b; 
}
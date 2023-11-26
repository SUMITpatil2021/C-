#include<iostream>
using namespace std;

void add(int,int);
void add(int,int,int);
void add(float,float);
void add(int,float);
void add(float,int); 
// float add(float,float);
// int add(int,int); // fun name and argu.are same so it is not allowed. 
// return type cannot useful in  function overloading.

int main()
{
     add(10,20);
     add(10,20,30);
     add(10.45f,20.45f);
     add(10,20.40f);
     add(10.50f,20);
     add(10,20); 


}
void add(int a,int b)
{ 
    cout<<"\n Addition of "<<a<< "and "<<b<< " is="<<a+b;

} 

void add(int a,int b, int c)
{ 
    cout<<"\n Addition of "<<a<< "and "<<b<<"and "<< c << " is="<<a+b+c;
    
} 
void add(float a,float b)
{ 
    cout<<"\n Addition of "<<a<< "and "<<b<< " is="<<a+b;
    
} 
void add(int a,float b)
{ 
    cout<<"\n Addition of "<<a<< "and "<<b<< " is="<<a+b;
    
} 
void add(float a,int b)
{ 
    cout<<"\n Addition of "<<a<< "and "<<b<< " is="<<a+b;
    
} 
// int add(int a,int b)
// { 
//     cout<<"\n Addition of "<<a<< "and "<<b<< "is"<<a+b;
    
// }





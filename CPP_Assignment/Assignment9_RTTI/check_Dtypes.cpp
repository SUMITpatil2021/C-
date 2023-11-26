/*  RTTI (Run-Time type identification )
RTTI is used to check the data types  at run time */
//TYPEINFO CLASS :
 /*it has all information about data types (built-in as well as user defind data types).
    Typeid is a opearator which is used to check type of data type of any variable */




#include<iostream>
#include<typeinfo>
using namespace std;

class Test
{

};

int main()
{
    int num=10;
    char ch='S';
    float avg=0.5f;
    char name[20]="SUMIT";


    cout<<endl<<"Data type of "<<num<<"\t is :"<<typeid(num).name();
        cout<<endl<<"Data type of "<<ch<<"\t is :"<<typeid(ch).name();

    cout<<endl<<"Data type of "<<avg<<"\t is :"<<typeid(avg).name();

    cout<<endl<<"Data type of "<<name<<"\t is :"<<typeid(name).name();

        cout<<endl<<"Data type of class Test" <<"\t is :"<<typeid(Test).name();



}
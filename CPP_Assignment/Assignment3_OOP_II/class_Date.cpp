#include<iostream>
using namespace std;

class Date
{
    int day,month,year;
    public:
    Date();
    Date(int,int);
    Date(int,int,int);
    void display();
    void setMonth(int);
};
Date::Date()
{
    day=10;
    month=02;
    year=2001;

}

Date::Date(int d,int y)
{
    day=month=d;
    year=y;
}

Date:: Date(int d,int m, int y)
{
    day=d;
    month=m;
    year=y;
}

void Date::display()
{
    cout<<endl<<day<<"/"<<month<<"/"<<year;
}

void Date:: setMonth(int m)
{
    month=m;
} 

int main()
{
    Date d1;
    d1.display();

    Date d2(2,2023);
    d2.display(); 
    d2.setMonth(3);
    d2.display();

    Date d3(21,3,2023);
    d3.display();

    return 0;
}
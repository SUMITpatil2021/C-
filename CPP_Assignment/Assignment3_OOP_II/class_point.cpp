#include<iostream>
using namespace std;

class Point
{
    int x,y; 
    static int cnt;
    public:
    Point();
    void display();
    void setPoint(int,int);
    int getCount();
}; int Point::cnt=0;

Point::Point()
{
    x=1;
    y=2;
    cnt++;
}

void Point::display()
{   
    cout<<endl<<"["<<x<<","<<y<<"]";

}

void Point::setPoint(int a,int b)
{
    x=a;
    y=b;
    cnt++;
} 
int Point::getCount()
{
    return cnt;
}

int main()
{
    Point p1;
    p1.display();

    Point p2;
    p2.setPoint(2,3);
    p2.display(); 

Point p3;
int temp=p3.getCount();
    cout<<endl<<"Number of Object creation:"<< temp;
}
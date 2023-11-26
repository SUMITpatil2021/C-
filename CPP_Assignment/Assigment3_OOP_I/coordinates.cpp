#include<iostream>
using namespace std;

class Point
{
    int x,y;
    public:
        void accept(int a,int b)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout<<endl<<"["<<x<<","<<y<<"]";
        }
}; 

int main()
{
    Point p1;
    p1.accept(10,20);
    p1.display();
    return 0;
}
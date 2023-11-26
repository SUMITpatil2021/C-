#include<iostream>
using namespace std;

class Time
{
    int sec,min,hr;
    public:
    Time();
    Time(int,int);
    Time(int,int,int);
    void display();
    void setMin(int);
};

Time::Time()

{
    hr=12;
    min=05;
    sec=55;
}

Time:: Time(int h,int s)
{
    hr=min=h;
    sec=s;
}

Time::Time(int h,int m, int s)
{
    hr=h;
    min=m;
    sec=s;
}

void Time::display()
{
    cout<<endl<<hr<<":"<<min<<":"<<sec;
}
void Time::setMin(int m)
{
    min=m;
} 

int main()
{
    Time t1;
    t1.display();

    Time t2(10,20);
    t2.display(); 

   t2.setMin(40);
   t2.display();

    Time t3(10,10,50);
    t3.display();


}

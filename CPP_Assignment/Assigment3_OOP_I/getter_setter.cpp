#include<iostream>
using namespace std;

class Date
{
    private:
        int day,month,year;
    public:
        void setDate(int d,int m, int y)
        {
            day=d;
            month=m;
            year=y;
        } 
        void getDate()
        {
            cout<<endl<<"\n \t "<<day<<"/"<<month<<"/"<<year<<endl;
        }

    /**********declaration of getter functions **********/
        int getDay();
        int getMonth();
        int getYear(); 
     /********declarations of setter functions************/
        int setDay(int);
        int setMonth(int);
        int setYear(int);
    
};

int main()
{
    Date d1;
    int dd,mm,yy;
    d1.setDate(21,2,2001); 
    d1.getDate();
    d1.setDay(32);
    d1.getDate();
    d1.getDay();
      
    // d1.getDay();
    // d1.getYear();
    dd=d1.getDay();
    mm=d1.getMonth();
    yy=d1.getYear(); 

    if((dd>=1 && dd<=31) && (mm>=1 && mm<=12))
    {
        cout<<endl<<"Valid Date ";
    }
    else
    {
        cout<<endl<<"Invalid Date";

    }


    return 0;
} 
/************************* defination of getter functions *************************/
int  Date:: getDay()
{
  cout<<"day is: "<< day;
  return day;
}

int  Date:: getMonth()
{
   return month;
}

int  Date:: getYear()
{
   return year;
} 


/***************************** defination of  setter functions *********************************/
int  Date:: setDay(int d)
{
    day=d;
}

int  Date:: setMonth(int m)
{
    month=m;
}

int  Date:: setYear(int y)
{
    year=y;
}
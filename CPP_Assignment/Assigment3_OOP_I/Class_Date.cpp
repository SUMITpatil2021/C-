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
            cout<<endl<<"\t "<<day<<"/"<<month<<"/"<<year;
        }
    
};

int main()
{
    Date d1;
    d1.setDate(21,2,2001);
    d1.getDate();
    return 0;
}
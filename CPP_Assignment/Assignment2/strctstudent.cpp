#include<iostream>
using namespace std;

typedef struct Student
{
    int sid;
    char sname[20];
    int marks;
    void accept()
    {
        cout<<"\n Enter student ID,Student Name and Total Marks:";
        cin>>sid>>sname>>marks;

    }
    void display()
    {
        cout<<" sid:"<<sid<<" sname:"<<sname<<" Marks:"<<marks;

    }
} ST;

int  getStudentMax(ST[],int);
int main()
{
    int i;
    ST s[2]; 
     
    for(i=0;i<2;i++)
    s[i].accept();
        for(i=0;i<2;i++)

    s[i].display();
    int max=getStudentMax(s,2);
    cout<<"\n max: "<<max;
    return 0;

} 

int getStudentMax(ST s[],int size)
{
    int i;
    int max= s[0].marks,index=0;
    for (i=1;i<size;i++)
    { 
        if(s[i].marks>max)
        {
            max=s[i].marks;
            index=s[i].marks;
        }
        return index;

    }
}
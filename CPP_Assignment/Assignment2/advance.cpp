#include<iostream>
using namespace std;

typedef  struct student
{
    int rno;
    char name[20];
    // char sub[20];
    int noofsub,*mark;


    void accept()
    {
        cout<<"\n Enter rno,name,noofsub :";
        cin>>rno>>name>>noofsub;
        mark= new int[noofsub];
        cout<<endl<<"Enter "<<noofsub<<" subjects marks";
        for(int i=0;i<noofsub;i++)
        {
            cin>>mark[i];
        } 
    }
        void display()
        { 
            cout<<name<<"'s marks are:";
        for(int i=0;i<noofsub;i++)
        {
            cout<<mark[i]<<",";
        }
        }
        
        
    
   

}ST;
int main()
{
    student s1;
    s1.accept();
    s1.display();
    student pgdac[2];
    for(int i=0;i<2;i++)
    {
        pgdac[i].accept();
    }
    for(int i=0;i<2;i++)
    {
        pgdac[i].display();
    }
    return 0;
}
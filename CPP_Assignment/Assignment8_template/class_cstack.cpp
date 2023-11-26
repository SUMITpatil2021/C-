#include<iostream>
using namespace std;

class cstack
{
    int size,top;
    int *arr;
    public:
    cstack()
    {
        size=3;
        top=-1;
        arr=new int[size];
    }

    cstack(int s)
    {
        size=s;
        top=-1;
        arr=new int[size];
    }

    void push(int no)
    {
       
        top++;
        arr[top]=no; 
        if(top==size-1)
        {
            cout<<endl<<"Stack is overflow  ";
        }
    }
    int  pop()
    {
        int no=arr[top];
        top--;
        return no; 
        if(top>0)
        {
            cout<<endl<<"Stack is underflow ";
        }
    } 

    void display ()
    {
         cout<<"\n\t Stack Is : \t ";
        for(int i=top;i>=0;i--)
        cout<<"\n\t"<<arr[i];
    }
}; 

int main()
{
    int no,ch;
    cstack c1(5);
    do
    {
        cout<<endl<<"\t 1.Push\
                 \n\n\t 2.pop\
                 \n\n\t 3.display\
                 \n\n\t 0.exit\
                 \n\t Enter your choice ";
                 cin>>ch;
                 switch (ch)

                 {
                 case 1:
                 cout<<endl<<"Enter number : ";
                 cin>>no;
                 c1.push(no);
                    break; 

                case 2:
                no=c1.pop();
                cout<<endl<<"Deleted number is :"<<no;


                case 3:
                c1.display();
                break;
                 }
    } while (ch!=0);
    
}
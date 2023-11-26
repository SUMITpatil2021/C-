#include<iostream>
#include<exception>
using namespace std;
 
class overflow:public exception
{
        public:
    char * what()
    {
        return "Stack overflow!!! \n ";
    }
};

class underflow:public exception
{
        public:
    char * what()
    {
        return "Stack underflow!!! \n ";
    }
};


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
           throw  overflow();
        }
    }
    int  pop()
    {
         
        if(top==-1)
        {
            throw underflow();
        } 
        else
        {
int no=arr[top];
        top--;
        return no;
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
                 try {
                 cout<<endl<<"Enter number : ";
                 cin>>no;
                 c1.push(no);
                    
                    
                 } 
                 
                 catch(overflow e)
                 {
                    cout<<e.what();
                 }
                 break; 
                case 2:
                try {
                no=c1.pop();
                cout<<endl<<"Deleted number is :"<<no;
                    }
                 catch(underflow e)
                 {
                    cout<<e.what();
                 }

                case 3:
                c1.display();
                break;
                
                 }
    } while (ch!=0);
    
}
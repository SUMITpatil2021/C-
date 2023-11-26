#include<iostream>
using namespace std;
template <class  T>
class cstack
{
    int size;
    T *arr,top;
    public:
    cstack()
    {
        size=3;
        top=-1;
        arr=new T[size];
    }

    cstack(int s)
    {
        size=s;
        top=-1;
        arr=new T[size];
    }

    void push(int no)
    {
       
       
        if(top==size-1)
        {
            cout<<endl<<"Stack is overflow  "; 
        } 
        else
        {
          top++;
          arr[top]=no; 
        }
    }
    int  pop()
    {
 
        if(top==-1)
        {
            cout<<endl<<"Stack is underflow ";
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
    cstack<int> c1(5);
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

                 c1.push(10);
                 c1.push(20);
                 c1.push(30);
                 c1.push(40);
                 c1.push(50); 
                 c1.push(60);
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
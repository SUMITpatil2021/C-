#include<iostream>
using namespace std;

class Calculator
{
    int no1,no2;
    public:
        void accept(int a,int b)
        {
            no1=a;
            no2=b;
        }
        void display()
        {
            cout<<endl<<"Two Numbers are: "<<no1<<","<<no2;

        } 
        void add();
        void sub();
        void mul();
        void div();

};

    int main()
 {
    Calculator c1;
    c1.accept(10,20);
    c1.display(); 
    int choice; 
    do
    {
       cout<<endl<<"\n 1.Addition\
                    \n 2.Substraction\
                    \n 3.Multiplication\
                    \n 4.Division\
                    \n 0.Exit\
                    \n Enter Your choice:";
        cin>>choice;
        switch (choice)
        {
            case 1:
            c1.add();
            break;

            case 2:
            c1.sub();
            break;

            case 3:
            c1.mul();
            break;

            case 4:
            c1.div();
            break;
    }
     } while (choice!=0); 
    // return 0;
}

  

void Calculator::add()
{
    cout<<endl<<no1<<" + "<<no2<<" = "<< no1+no2;
}

void Calculator::sub()
{
    cout<<endl<<no1<<" - "<<no2<<" = "<< no1-no2;
}

void Calculator::mul()
{
    cout<<endl<<no1<<" * "<<no2<<" = "<< no1*no2;
}

void Calculator::div()
{
    cout<<endl<<no1<<" / "<<no2<<" = "<< no1/no2;
}
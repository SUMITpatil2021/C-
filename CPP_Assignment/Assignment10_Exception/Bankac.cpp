#include<iostream>
#include<string.h>
using namespace std;

class AmountExceede: public exception
{
    public:
    char * what()
    {
        return "PAN Card details Required!!";
    }
}; 

class MinimumBalance: public exception
{
    public:
    char * what()
    {
        return "While withdraw maintain minimum balance of amount 10,000/-";
    }
}; 

class Bank
{
    int acno;  
    char name[20];
    double balance;
    public:
    Bank()
    {
        acno=0;
        strcpy(name,"NA");
        balance=0;
    }

    Bank(int ac,const char *nm,double bal)
    {
        acno=ac;
        strcpy(name,nm);
        balance=bal;
    }

    void  accept()
    {
        cout<<endl<<"Enter details of Account holder:";
        cin>>acno>>name>>balance;
    }

    void display()
    {
        cout<<endl<<"Ac No.: "<<acno<<"\t Name: "<<name<<"\t  Balance: "<<balance;
    }
     void deposit()
     {
        double dep;
        cout<<endl<<"Enter amount for deposit:";
        cin>>dep;

        if(dep>=50000)
        {
            throw AmountExceede();
        }
        else
        {
            cout<<endl<<"amount:"<<balance+dep;
        }
     } 

     void withdraw()
     {
        double am;
        cout<<endl<<"Enter amount for withdraw:";
        cin>>am;
        balance=balance-am;
        if(balance<=10000)
        {
            
            cout<<endl<<"Your account balance is : "<<balance<<endl;
            throw MinimumBalance();
        }
        else
        {
            cout<<endl<<"Your account balance is :"<<balance;

        }
     }
}; 

int main()
{
    Bank b1;
    b1.accept();
    b1.display();
   try
   {
    b1.deposit();
    
   }
   catch(AmountExceede e)
   {
   cout<<e.what();
   }  
      try
   {
    
    b1.withdraw();
   }
   catch(MinimumBalance e)
   {
   cout<<e.what();
   } 

    
    
}
#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
    static int cnt;
    static float interestRate;
    char name [20];
    int AcNo,balance;
    // float interest.;
    public:
    BankAccount();
    BankAccount(char*,int);
    void display() const ;
    static void setIntrestRate(float);
 

}; 
int BankAccount::cnt=0; // static instatniation
float BankAccount::interestRate=0;

BankAccount::BankAccount()
{
    cnt++;
    AcNo=cnt;
    strcpy(name,"NA");

} 

BankAccount::BankAccount( char *s,int bal)
{
    cnt++;
    AcNo=cnt;
    strcpy(name,s);
    balance=bal;
    // interest=interestRate;

}

void BankAccount::display() const
{
    cout<<endl<<"Ac Number:"<<AcNo<<"\t Name:"<<name<<"\t Balance:"<<balance<<"\t interest Rate:"<<interestRate;
} 




/***********def for setting intresrt rate*******************/
// static function
void BankAccount::setIntrestRate(float f)
{
    interestRate=f;
} 
int main()
{
    BankAccount::setIntrestRate(10.3f); // without object creation set the value comms to all 
    BankAccount b1;
    b1.display();
     
     char s[20]="Sumit";
     BankAccount b2(s,20000);
    // b2.setIntrestRate(10.5f); // set value using object 
     b2.display();
}
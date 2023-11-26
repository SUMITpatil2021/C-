#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Student
{
    int rno;
    char name[20];
    float per;
    public:
    void accept()
    {
        cout<<endl<<"Enter Student Roll number Name and percentage : ";
        cin>>rno>>name>>per;
    }

    void display()
    {
        cout<<endl<<"Roll number :"<<rno<<"\t Name : "<<name<<"\t Percetage :"<<per;

    }

    void addRecord()
    {
        ofstream fout("Student.dat",ios::app|ios::binary);
        Student s1;
        s1.accept();
        fout.write((char*)&s1,sizeof(Student));
        fout.close();
    }
    void displayRecord()
    {
        Student s1;
        ifstream fin("Student.dat",ios::binary);
        while(fin.read((char*)&s1,sizeof(s1)))
        {
            cout<<endl<<"******* "<<fin.tellg();
            s1.display();
        }

    }

};

int main()
{
   int ch;
    Student s1;

    do
    {
       cout<<endl<<"\n 1.Add Record\
                    \n 2.Display Record\
                    \n 0.Exit\
                    \n Enter Your choice";
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                        s1.addRecord();
                        break;

                        case 2:
                        s1.displayRecord();
                        break;

                    }
    } while (ch!=0);
     
     return 0;
}
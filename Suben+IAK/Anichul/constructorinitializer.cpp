#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    const int admissionfee;
    const int examfee;
    int id;


    Student(int x,int y,int z)
    : admissionfee(x),examfee(y)
    {
        cout<<admissionfee<<endl;
        cout<<examfee<<endl;
        id=z;
        cout<<"ID = "<<id<<endl;
    }
};

int main()
{
    Student a1(15000,500,101);



    getch();
}

#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;

    }
};
class Student : public Person
{
public:
    int id;
    void display2()
    {
        cout<<"ID : "<<id<<endl;
        display1();

    }
};
int main()
{
    Student s1;
    s1.id= 101;
    s1.name="Rayhanul Islam";
    s1.age=20;
    s1.display2();
}

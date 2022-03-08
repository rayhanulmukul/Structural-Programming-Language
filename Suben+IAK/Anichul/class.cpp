#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    int id;
    double gpa;
    void setvalue(int x,double y)
    {
        id= x;
        gpa=y;
    }
    void display()
    {
        cout<<id<<" "<<fixed<<setprecision(2)<<gpa<<endl;
    }
};

int main()
{
    student mukul,jahir;
    mukul.setvalue(10,5.00);
    jahir.setvalue(30,4.67);

    mukul.display();
    jahir.display();




}

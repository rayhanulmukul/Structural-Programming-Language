#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;



    cout<<setprecision(10);
    float sum=n1+n2;
    cout<<sum<<endl;


    float mul=n1*n2;
    cout<<mul<<endl;

    double div=(float)n1/n2;
    cout<<div<<endl;

    int rem=n1%n2;
    cout<<rem<<endl;


}

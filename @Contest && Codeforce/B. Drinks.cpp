#include<iostream>
using namespace std;
int main()
{
    double n,a,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    sum=sum/n;
    cout<<sum<<endl;
}

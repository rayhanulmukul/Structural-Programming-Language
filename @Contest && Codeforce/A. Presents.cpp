#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arra[n];
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(arra[i]==j)
                cout<<i+1<<" ";
        }
    }




}

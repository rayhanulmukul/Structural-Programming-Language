#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t],e=0,o=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    if(e>o)
    {
        for(int i=0;i<t;i++)
        {
            if(a[i]%2!=0)
            {
               cout<<i+1<<endl;
               break;
            }

        }
    }
    else
        {
        for(int i=0;i<t;i++)
        {
            if(a[i]%2==0)
            {
               cout<<i+1<<endl;
               break;
            }

        }
    }



}

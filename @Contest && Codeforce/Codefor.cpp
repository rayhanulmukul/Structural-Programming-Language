#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s,m=1,x,count=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            s=sqrt(x);
            if(s*s!=x)count++;

        }
        if(count>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

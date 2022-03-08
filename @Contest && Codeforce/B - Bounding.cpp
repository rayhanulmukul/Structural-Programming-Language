#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,l,d1=0,c=1,d2=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>l;
        d2=d2+l;
        if(d2<=x)c++;

    }
    cout<<c;
    return 0;
}

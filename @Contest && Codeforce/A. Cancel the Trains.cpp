#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,arr[101]={0},a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            arr[a]++;
        }
        for(int j=0;j<m;j++)
        {
            cin>>b;
            if(arr[b]==1)
                c++;
        }
        cout<<c<<endl;



    }




}

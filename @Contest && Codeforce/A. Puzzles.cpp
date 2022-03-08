#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int std,puz,m,ans;
    cin>>std>>puz;
    int arr[puz];
    for(int i=0;i<puz;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+puz);
    m=arr[puz-1]-arr[0];
    for(int i=std;i<=puz;i++)
    {
        ans=arr[i-1]-arr[i-std];
        ans=abs(ans);
        m=min(m,ans);
    }
    cout<<m;



}

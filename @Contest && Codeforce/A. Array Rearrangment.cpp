#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,r;
        cin>>n>>x;
        int arr[n];
        r=sizeof(arr);
        for(int i=0; i<r; i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+r);
        for(int i=0; i<r; i++)
        {
            cout<<arr[i];

        }


//        int arr1[t];
//        for(int i=0;i<t;i++)
//        {
//            cin>>arr1[i];
//        }
//
//
//        for(int j=0;j<t;j++)
//        {
//            if(arr[i]+arr1[i]>=x)
//                y++;
//        }
//        if(y)
//            cout<<"NO";
//        else
//            cout<<"YES";




    }



}

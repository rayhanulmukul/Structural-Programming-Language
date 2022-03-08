#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],m,x;

    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    x=arr[1];
    m=abs(x-arr[0])+abs(x-arr[2]);
    cout<<m;


}

#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int arra[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
        if(arra[i]>h)
        {
            count=count+2;
        }
        else
            count++;
    }
    cout<<count;


}

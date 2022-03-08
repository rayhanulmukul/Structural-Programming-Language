#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arra[n],count=1;
    for(int i=0; i<n; i++)
    {
        cin>>arra[i];

    }
    for(int i=0; i<n-1; i++)
    {
        if(arra[i]!=arra[i+1])
            count++;
    }
    cout<<count;


}

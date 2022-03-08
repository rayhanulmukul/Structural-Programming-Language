#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long a=1;
    int x;
    cin>>x;
    for(int i=2;i<=x;i++)
    {
        a=lcm(a,i);
    }
    cout<<a+1<<endl;




}

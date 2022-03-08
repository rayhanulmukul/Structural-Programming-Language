#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        char a[100];
        int l,c=0;
        cin>>a;
        l=strlen(a);
        if(a[0]==')' || a[l-1]=='(')
            cout<<"NO"<<endl;

        else if(l%2==0)
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

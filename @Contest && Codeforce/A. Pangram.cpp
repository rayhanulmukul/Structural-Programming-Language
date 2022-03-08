#include<iostream>
using namespace std;
int main()
{
    int n,B[200]= {0};
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if('A'<=s[i] && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        B[s[i]]++;
    }

    for(int i='a'; i<='z'; i++)
    {
        if(B[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;



}


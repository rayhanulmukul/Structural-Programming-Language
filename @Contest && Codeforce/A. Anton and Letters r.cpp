#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int c=0,n[1000]={0};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            {
                if(n[s[i]]==0)
                   {
                       c++;

                   }
                   n[s[i]]++;
            }

        }

    }
    cout<<c;




}

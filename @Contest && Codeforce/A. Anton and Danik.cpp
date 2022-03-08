#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,c1=0,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            c1++;
        else if(s[i]=='D')
            c++;
    }
    if(c1>c)
        cout<<"Anton";
    else if(c>c1)
        cout<<"Danik";
    else
    cout<<"Friendship";



}

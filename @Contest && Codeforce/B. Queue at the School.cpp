#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    int i,j;
    for(i=0;i<t;i++)
    {
        for(j=0;j<s.size()-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
            s[j]='G';
            s[j+1]='B';
            j++;
            }
        }
    }
    cout<<s<<endl;


}

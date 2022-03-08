#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,x=0,y=0,z;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
        x++;
        y=0;
        }
        else
        {
            y++;
            x=0;
        }

        if(x==7 || y==7)
        {
            z=1;
        }
    }

    if(z==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i;
    cin>> s;

    for(i=0;i<s.sizeof();i++)
    {
        s[i]=97-32+i;
    }
    cout<<s<<endl;


}

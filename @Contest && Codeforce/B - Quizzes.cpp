#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X;
    cin>>N>>X;

    int c=X;

    string S;
    cin>>S;

    for(int i=0;i<N;i++)
    {
        if(S[i]=='o')
        {
            c++;

        }

        else if(S[i]=='x' && c!=0)
        {
            c--;
        }
    }
    cout<<c;


}

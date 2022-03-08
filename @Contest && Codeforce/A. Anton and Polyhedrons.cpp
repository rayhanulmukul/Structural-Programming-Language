#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")c=c+4;  ///c+=4;
        else if(s=="Cube")c=c+6;  ///c+=6;
        else if(s=="Octahedron")c=c+8;  ///c+=8;
        else if(s=="Dodecahedron")c=c+12;  ///c+=12;
        else if(s=="Icosahedron")c=c+20;  ///c+=20;

    }
    cout<<c;




}

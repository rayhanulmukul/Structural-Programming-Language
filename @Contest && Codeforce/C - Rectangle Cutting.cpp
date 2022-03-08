#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,x,y;
    cin>>w>>h>>x>>y;
    cout<<fixed<<setprecision(6)<<(double)w*h/2<<" ";
    if(w==x*2 && h==y*2)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
        return 0;
}

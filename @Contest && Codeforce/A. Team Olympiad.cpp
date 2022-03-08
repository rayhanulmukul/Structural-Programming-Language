#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0,count2=0,count3=0;
    cin>>n;
    int a[n],b[n],c[n],t1=0,t2=0,t3=0,x;
    for(int i=1;i<=n;i++)   ///count  i=1 start
    {
        cin>>x;
        {
            if(x==1)
            {
                a[t1]=i;
                t1++;

            }
            else if(x==2)
            {
                b[t2]=i;
                t2++;
            }
            else
            {
                c[t3]=i;
                t3++;
            }
        }
    }
    int m=min(min(t1,t2),t3);
    cout<<m<<endl;

    for(int i=0;i<m;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
    return 0;


}

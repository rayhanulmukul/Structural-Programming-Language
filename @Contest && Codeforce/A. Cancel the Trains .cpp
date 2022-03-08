#include<bits/stdc++.h>
using namespace std;
int main()
  {
      int t,n,m;
      cin>>t;
      for(int i=0;i<t;i++)
      {
          cin>>n>>m;
          int a[n],b[m],arr[101]={0},c=0;
          for(int j=0;j<n;j++)
          {
              cin>>a[j];
              arr[a[j]]++;
          }
          for(int j=0;j<m;j++)
          {
              cin>>b[j];
              if(arr[b[j]]==1)
              {
                 c++;
              }
          }
          cout<<c<<endl;
      }

    return 0;
  }

#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<map>
#include<vector>
#include<set>
#include<iomanip>
#define F first
#define S second
#define P system("PAUSE");
#define H return 0;
#define pb push_back
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c=0,m=1;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];

        if(a[i]>=a[i-1])
        {
            c++;
            m=max(c,m);

        }
        else
        {
            c=1;
        }


    }
    cout<<m;



}

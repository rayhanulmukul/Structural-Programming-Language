#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>vect;

    int arr[]={10,20,30,45};
    int arr1[]={12,23,34,65};
    int n = sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        vect.push_back(make_pair(arr[i],arr1[i]));
    }
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }

    sort(vect.rbegin(),vect.rend());
    cout<<"The Vector After sort Operation : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }



}

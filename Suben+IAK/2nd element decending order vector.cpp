#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int>&a,const pair<int,int>&b)
{
    return (a.second<b.second);
}
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

    sort(vect.rbegin(),vect.rend(),sortbysec);
    cout<<"The Vector After sort Operation : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }



}


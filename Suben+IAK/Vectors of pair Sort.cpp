#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
     // Declaring vector of pairs
    vector<pair<int,int>>vect;


    // Initializing 1st and 2nd element of
    // pairs with array values
    int arr[]={10,20,5,40};
    int arr1[]={30,60,20,50};
    int n=sizeof(arr[0]); //sizeof(arr[0]);    sizeof(arr);

    for(int i=0;i<n;i++)
    {
        vect.push_back(make_pair(arr[i],arr1[i]));
    }

    cout<<"The vector before sort operation is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;

    }

    sort(vect.begin(),vect.end());
    cout<<"The vector after sort operation is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
    return 0;


}



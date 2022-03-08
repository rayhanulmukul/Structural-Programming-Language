// C++ program to demonstrate sorting in vector
// of pair according to 2nd element of pair
#include<bits/stdc++.h>
using namespace std;

int sortbysec(const pair<int,int> &a,const pair<int,int> &b)  // Driver function to sort the vector elements // by second element of pairs
{
    return (a.second < b.second);
}

int main()
{
    vector< pair <int, int> > vect;     // declaring vector of pairs
    int arr[] = {10, 20, 5, 40 };        // Initialising 1st and 2nd element of pairs // with array values
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n; i++)         // Entering values in vector of pairs
        vect.push_back( make_pair(arr[i],arr1[i]) );

    cout << "The vector before sort operation is:\n" ;      // Printing the original vector(before sort())
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "<< vect[i].second << endl;

    }
    sort(vect.begin(), vect.end(), sortbysec);    // Using sort() function to sort by 2nd element // of pair
    cout << "The vector after sort operation is:\n" ;   // Printing the sorted vector(after using sort())
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "<< vect[i].second << endl;
    }
    return 0;
}

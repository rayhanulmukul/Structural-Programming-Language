#include<iostream>
using namespace std;

int fact(int x)
{
    if(x==1)
        return 1;
    else
        return x * fact(x-1);
}

int main()
{
    int n;
    cin>>n;
    int factorail = fact(n);
    cout<<factorail;


}

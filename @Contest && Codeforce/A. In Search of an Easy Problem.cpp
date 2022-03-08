#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arra[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
        s=arra[i]+s;

    }
       if(s>=1)
        cout<<"HARD";


        else if(s==0)
            cout<<"EASY";

}

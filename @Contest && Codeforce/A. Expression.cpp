#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int s5=a+b+c;
    int s1=a+b*c;
    int s2=a*(b+c);
    int s3=a*b*c;
    int s4=(a+b)*c;

    int s =max(s4,max(s3,max(s2,max(s5,s1))));
    cout<<s<<endl;


}

#include<stdio.h>
int main()
{
    long long int n,k,c;
    scanf("%lld%lld",&n,&k);
    if(n%2==0)
    {
        c=n/2;
    }
    else
    {
        c=(n+1)/2;
    }
    if(k<=c)
    {
        printf("%lld",k*2-1);
    }
    else
    {
        printf("%lld",(k-c)*2);
    }

}

#include<stdio.h>
int main()
{
    long long n,m,a,x,z;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(n%a==0)
        x=n/a;
        else
            x=n/a+1;
        if(m%a==0)
            z=m/a;
        else
            z=m/a+1;
    printf("%lld",x*z);
    return 0;


}

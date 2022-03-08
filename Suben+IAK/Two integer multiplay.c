#include<stdio.h>
int main()
{
    /*long long a,b,c;
    scanf("%lld %lld",&a,&b); //123456*987654=121,931,812,224;
    c=a*b;
    printf("%lld\n",c);*/

    int a,b;
    long long c;
    scanf("%d%d",&a,&b); ////123456*987654=121,931,812,224;
    c=a*(long long)b;
    printf("%lld\n",c);

    /*int a,b;
    long long c;
    scanf("%d%d",&a,&b); //123456*987654=167,27,27,936
    c=a*b;
    printf("%lld\n",c);*/

    /*int a,b,c;
    scanf("%d %d",&a,&b);  //123456*987654=167,27,27,936
    c=a*b;
    printf("%d",c);*/
    return 0;



}

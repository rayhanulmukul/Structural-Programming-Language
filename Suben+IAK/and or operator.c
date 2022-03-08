#include<stdio.h>
int main()
{
    int sum=0,multi=1;
    int i,a;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        (a%2) && (sum+=a);
        (a%2) || (multi*=a);
    }
    printf("%d %d",sum,multi);

    return 0;

}

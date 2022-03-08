#include <stdio.h>
int main ()
{
    int r,n;
    scanf("%d",&n);
    for(r=0;n>0;n=n/10)
    {
        r=r+10;
        r=r+n(%10);
    }
    printf("%d",r);


    return 0;
}

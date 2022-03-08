#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d",&a);
    loop:
        b=a/10;
        printf("%d",a%10);
        a=b;
        if(a>0)
            goto loop;


    return 0;
}

#include <stdio.h>
int main ()
{
    int i,j,sum=0,s=0;
    i=1;j=0;
    loop:
        i=i+2;
        j=j+2;
        sum=sum+i;
        s=s+j;
        if(i<=10 && j<=10)
            goto loop;
        printf("%d %d",sum,s);

}

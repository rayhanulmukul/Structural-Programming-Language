#include <stdio.h >
int main ()
{
    int n,i;
    for(n=1;n<=20;n=n+1)
    {
        for(i=1;i<=10;i++)
        {
            n=n+i;
            printf("%d X %d = %d\n",n,i,n);
        }
    }

    return 0;
}

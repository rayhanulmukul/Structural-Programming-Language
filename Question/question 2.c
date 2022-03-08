#include <stdio.h>
int main ()
{
    int m,n,p;
    int i=0;
    for(m=4;m<=6;m++)
        for(n=4;n<=6;n++)
        for(p=4;p<=6;p++)
    {
        printf("[%d]=%d->%d->%d\n",i,m,n,p);
        i=i+1;
    }
    return 0;
}

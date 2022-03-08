#include <stdio.h>
int main ()
{
    int a[15],b=0,i;
    for(i=0;i<15;i++)
    {
        a[i]=++b;
        printf("%d\n",a[i]);
    }

    return 0;
}


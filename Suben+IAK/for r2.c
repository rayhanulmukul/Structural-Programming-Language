#include <stdio.h>
int main()
{
    int i=0,j=0,a[i];
    for(i=0;i<=7;i++)
        for(j=0;j<5;j++)
    {
        a[i]=i;
        printf("%d\n",a[i]);
    }
}

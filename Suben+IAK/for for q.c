#include<stdio.h>
int main ()
{
    int i,j,arr[10];
    for(i=0;i<10;i++)
    for(j=0;j<=i;j++)
    {
        arr[i]=i;
       printf("%d ",arr[i]);

    }


    return 0;
}

//Find out the output provided by the printf function at line 19
#include<stdio.h>
int main ()
{
    int a[25],b[25];
    int i=0;
    int status=1;
    for(i=0;i<=25;i++)
    if(status)
    {
        a[i]=(i+1)/2;
        //printf("a[%d]=%d\n",i,a[i]);
        if(i==13)
            status=0;
    }
    else
    {
        a[i]=(i+1)/2;
        printf("a[%d]=%d\n",i,a[i]);
    }


    return 0;
}


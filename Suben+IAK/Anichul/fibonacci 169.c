#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("Enter N : ");
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%2d ",a[i]);
    }


}

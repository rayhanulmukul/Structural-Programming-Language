#include<stdio.h>
int main()
{
    int i,n,s;
    scanf("%d",&n);
    if(n==1)
        printf("1");
    else
    {
        printf("%d ",n);
    for(i=1;i<n;i++)
    printf("%d ",i);
    }
    return 0;
}

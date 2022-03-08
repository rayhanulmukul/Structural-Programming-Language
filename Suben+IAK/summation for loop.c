#include<stdio.h>
int main()
{
    int i,n,sum;

    printf("Enter last value : ");
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);

    return 0;
}

#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        sum=sum*i*i*i;

        if(i==1)
            printf("1^1^1 *");
        else if(i==n)
            printf("%d^%d^%d",i,i,i);
        else
            printf(" %d^%d^%d *",i,i,i);
    }
    printf(" = %d\n",sum);

    getch();
}


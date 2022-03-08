#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        sum=sum*i;

        if(i==2)
            printf("2 *");
        else if(i==n)
            printf("%d",i);
        else
            printf(" %d *",i);
    }
    printf(" = %d\n",sum);

    getch();
}

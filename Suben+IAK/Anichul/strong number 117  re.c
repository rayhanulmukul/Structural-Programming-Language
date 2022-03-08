#include<stdio.h>
int main()
{
    int sum=0,temp,r,num,fact=1,i,j,initialnum,finalnum;

    printf("Initialnum :");
    scanf("%d",&initialnum);

    printf("Finalnum :");
    scanf("%d",&finalnum);

    for(j=initialnum;j<=finalnum;j++)
    {

    temp=j;

    while(temp!=0)
    {
        r=temp%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==j)
        printf("%d ",j);
        sum=0;

    }

    return 0;

}


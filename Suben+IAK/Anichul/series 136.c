#include<stdio.h>
int main()
{
    int i,n,sum,even=0,odd=0;

    printf("Enter the series last number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
    }
    printf("Sum = %d\n",odd-even);

    getch();
}

#include<stdio.h>
int main()
{
    while(1)
    {

    int i,n;
    printf("Enter any number = ");
    scanf("%d",&n);
    for(i=1;i<=20;i++)
        printf("%d X %d = %d\n",n,i,n*i);

    }
    return 0;

}

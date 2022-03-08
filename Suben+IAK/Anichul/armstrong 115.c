#include<stdio.h>
int main()
{
    int num,tem,r,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    tem = num;
    while(tem!=0)
    {
        r=tem%10;
        sum=sum+r*r*r;
        tem=tem/10;
    }
    if(num==sum)
        printf("Armstrong number");
    else
        printf("Not Armistrong number");

}



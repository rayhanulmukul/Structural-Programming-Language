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
        sum=sum*10+r;
        tem=tem/10;
    }
    printf("Reverse of number = %d\n",sum);

}

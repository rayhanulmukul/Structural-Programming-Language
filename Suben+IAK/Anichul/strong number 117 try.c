#include<stdio.h>
int main()
{
    int i,num,sum=0,r,temp,fact;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp=num;
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

    if(sum==num)
        printf("%d Strong number",num);
    else
        printf("%d Not strong number",num);

}

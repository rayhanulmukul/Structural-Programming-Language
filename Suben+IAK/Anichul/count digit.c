#include<stdio.h>
int main()
{
    int temp,num,count=0;
    printf("Enter any number :");
    scanf("%d",&num);
    while(num!=0)
    {

        num=num/10;
        count=count+1;
    }
    printf("total number of digit=  %d",count);


    return 0;

}


#include<stdio.h>
int main()
{
    int num;
    printf("Enter number= ");
    scanf("%d",&num);

    if(num%2==0)
    printf("Even");
    else if(num%2!=0)
        printf("odd");

}

#include<stdio.h>
int main()
{
    int i,pos=-1,value,num[]={10,4,66,24,67,35,14};
    printf("Enter any Number :");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item is not found");
    }
    else
        printf("%d position Number %d",value,pos);




}

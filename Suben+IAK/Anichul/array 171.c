#include<stdio.h>
int main()
{
    int array1[30]={12,3,56,67,8,6},array2[30],n,i;

    printf("Enter array1 : ");
    for(i=0;i<6;i++)
    {
        printf("%d ",array1[i]);
    }


    for(i=0;i<6;i++)
    {
        array2[i]=array1[i];
    }

    printf("\nEnter array2 : ");
    for(i=0;i<6;i++)
    {
        printf("%d ",array2[i]);
    }

    getch();
}

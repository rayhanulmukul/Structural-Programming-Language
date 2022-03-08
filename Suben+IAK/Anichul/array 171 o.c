#include<stdio.h>
int main()
{
    int array1[30],array2[30],n,i;
    printf("How many Numbers : ");
    scanf("%d",&n);

    printf("Enter Some Numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter array1 : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }


    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }

    printf("\nEnter array2 : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }

    getch();
}


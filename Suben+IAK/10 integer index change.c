#include<stdio.h>
int main()
{
    int array[10],i,j,temp=0;
    printf("Enter Array Numbers :\n\n");
    for(i=0;i<=9;i++)
    {
        printf("Array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    for(i=0,j=9;i<=j;i++,j--)
    {
       temp=array[i];
       array[i]=array[j];
       array[j]=temp;
    }
    printf("Printf Index array :\n");
    for(i=0;i<=9;i++)
    {
        printf("Array[%d] = %d\n",i,array[i]);
    }
    getch();





}

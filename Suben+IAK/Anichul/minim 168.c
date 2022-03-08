#include<stdio.h>
int main()
{
    int min,num[100],n,i;
    printf("Enter Number : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    min=num[0];
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("Mainimum : %d",min);

}


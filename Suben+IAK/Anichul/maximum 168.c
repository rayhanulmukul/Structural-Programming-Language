#include<stdio.h>
int main()
{
    int max,num[100],n,i;
    printf("Enter Number : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum : %d",max);

}

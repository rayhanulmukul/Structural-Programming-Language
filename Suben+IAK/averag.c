#include <stdio.h>
int main()
{
    int i,num,sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%d",sum/10);

    return 0;
}

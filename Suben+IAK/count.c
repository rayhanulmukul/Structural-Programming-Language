#include <stdio.h>
int main()
{
    int i,num,count=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&num);
        if(num==0)
            count=count+1;
    }
    printf("%d",count);

    return 0;
}


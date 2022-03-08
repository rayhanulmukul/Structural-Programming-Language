#include <stdio.h>
int main()
{
    int a,t;
    int i=0;
    for(t=1;t<=5;t++)
    {
        scanf("%d",&a);
        int c=0;
        for(i=a;i>=1;i=i/10)
        {
            if(i%10==0)
            {
                c=c+1;
            }
        }
        printf("%d",c);
    }

    return 0;
}

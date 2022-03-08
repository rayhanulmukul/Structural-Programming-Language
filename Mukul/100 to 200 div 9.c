#include <stdio.h>
int main()
{
    int i,c=0;
    for(i=100;i<=200;i++)
    {
        if(i%9==0);
        {
        printf("%d\n",i);
        c=c+i;
        }
    printf("%d\n",c);
    }
    return 0;
}

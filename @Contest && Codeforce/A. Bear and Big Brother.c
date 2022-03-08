#include<stdio.h>
int main()
{
    int a,b,i,s;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}

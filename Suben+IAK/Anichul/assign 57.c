#include<stdio.h>
int main()
{
    int x=5;
    x+=2;
    printf("sum = %d\n",x);

    x-=2;
    printf("sbm = %d\n",x);

    x*=2;
    printf("mul = %d\n",x);

    x/=2;
    printf("div = %d\n",x);

    x%=2;
    printf("remain = %d\n",x);

    return 0;
}

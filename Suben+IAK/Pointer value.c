#include<stdio.h>
int main()
{
    int x = 100;
    int *p;
    p=&x;
    *p=20;
    printf("Value of x is %d\n",x);
    x=50;
    printf("Value of x is %d\n",x);
    printf("Value of x is %d\n",*p);
    return 0;


}

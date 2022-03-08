#include<stdio.h>
int main()
{
    double x = 10.233;
    double *p;
    p=&x;

    printf("%lf\n",*p);
    printf("Address of x : %d\n",p);
    printf("Address of x : %d\n",&x);
    return 0;



}

#include<stdio.h>
int main()
{
    float x=200;

    float* px=&x;

    *px=100;
    printf("%f\n",*px);
    printf("%f\n",x);

    return 0;



}


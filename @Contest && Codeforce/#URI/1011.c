#include<stdio.h>
int main()
{
    float r;
    double sum;
    scanf("%f",&r);
    sum=(4.0/3)*3.14159*(r*r*r);
    printf("VOLUME = %.3lf\n",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    double base,exp,result=1,i;

    printf("Enter Base = ");
    scanf("%lf",&base);

    printf("Enter Exponent = ");
    scanf("%lf",&exp);

    for(i=0;i<exp;i++)
    {
        result = result * base;
    }
    printf("%.2lf\n",result);

    /*result = pow(base,exp);
    printf("%.2lf\n",result);*/



}

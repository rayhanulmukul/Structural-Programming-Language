#include<stdio.h>

void calculatePower(double base,double e)
{
    double i,result=1;
    for(i=0;i<e;i++)
    {
        result = result * base;
    }
    printf("%.2lf\n",result);
}
int main()
{
    double base,exp;

    printf("Enter Base = ");
    scanf("%lf",&base);

    printf("Enter Exponent = ");
    scanf("%lf",&exp);

   calculatePower(base,exp);
   calculatePower(4,3);
   calculatePower(2,3);
   calculatePower(3,3);
}

#include<stdio.h>
int main()
{
    double x;
    printf("Enter X : ");
    scanf("%lf",&x);

    double result = log(x);//log10,exp,sin,cos,tan,sqrt,abs,pow
    printf("log(%lf) = %.2lf\n",x,result);

}

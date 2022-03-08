#include<stdio.h>
int main()
{

    double num1,num2,num3,area,s;
    printf("Enter three number : ");
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    s=(num1+num2+num3)/2;
    area=sqrt(s*(s-num1)*(s-num2)*(s-num3));
    printf("Area of Traingle = %.2lf\n",area);
    return 0;


}

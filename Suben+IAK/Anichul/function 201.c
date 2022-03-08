#include<stdio.h>
int main()
{
    double base,height;
    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Height : ");
    scanf("%lf",&height);

    double area = triangleArea(base, height);
    printf("Area = %.2lf\n",area);

}
triangleArea(double b,double h)
{
   return 0.5*b*h;
}

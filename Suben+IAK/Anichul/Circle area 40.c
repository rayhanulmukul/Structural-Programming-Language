#include<sTDio.h>
#include<Math.h>
int main()
{
    float radius,area;//pi=3.1416;
    printf("Enter Radius : ");
    scanf("%f",&radius);

    //area=3.1416*radius*radius;
    //area=pi*radius*radius;
    area=M_PI*radius*radius;

    printf("Area of Circle = %.2f",area);
    return 0;


}

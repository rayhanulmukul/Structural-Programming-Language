#include<stdio.h>
int main()
{
    float area,base,height;
    printf("Base = ");
    scanf("%f",&base);
    printf("Height = ");
    scanf("%f",&height);

    area=1/(float)2 * base * height;  //0.5
    printf("Area of traingle = %.2f",area);

    return 0;


}

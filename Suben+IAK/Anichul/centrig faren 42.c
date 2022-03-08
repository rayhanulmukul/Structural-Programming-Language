#include<stdio.h>
int main ()

{
    float c,f;
    printf("Enter Centigrade :");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Faren = %.2f\n",f);
    return 0;
}

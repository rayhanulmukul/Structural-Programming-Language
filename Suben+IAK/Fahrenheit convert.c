#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter Fahrenheit temperature : ");
    scanf("%f",&F);
    C=5.0/9*(F-32);  // C=5/(float)9*(F-32);  //C=5*(F-32)/9;    //C=(float)5/9*(F-32);
    printf("Fahreheit temperture convert Celsius = %f\n",C);
    return 0;

}

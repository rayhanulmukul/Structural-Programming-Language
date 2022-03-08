#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;
    printf("Temperature convertion menu\n");
    printf("1.Fahrenheit to Celsius\n");
    printf("2.Celsius to Farenheit\n");
    printf("Enter your option : ");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
    {
        printf("Enter Fahrenheit temperature : ");
        scanf("%f",&temp);
        convertedtemp=(temp-32)/1.8;
        printf("The temperature in Celsius is = %f\n",convertedtemp);
        break;
    }
    case 2:
    {
        printf("Enter Celsius temperature : ");
        scanf("%f",&temp);
        convertedtemp=(1.8*temp)+32;
        printf("The temperature in Fahrenheit is = %f\n",convertedtemp);
        break;
    }
    default:
        printf("Fault! a correct option");
    }
}

#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter Two numbers : ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("The sum is = %d\n",sum);
    avg=(float)sum/2; //type casting
    printf("The average number = %.2f\n",avg);
    return 0;
}

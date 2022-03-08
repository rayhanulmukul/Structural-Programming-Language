//program about the sum of two variables
#include <stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    int reminder;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    reminder=a%b,
    printf("the sum is %f\nthe sub is %f\nthe mul is %f\nthe div is%f\nthe reminder %d",sum,sub,mul,div,reminder);
    return 0;
}



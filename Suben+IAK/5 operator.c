//program about the sum of two variables
#include <stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    int reminder;float div;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    reminder=a%b;
    printf("the sum is %d\nthe sub is %d\nthe reminder %d\n%d\n%f",sum,sub,reminder,mul,div);
    return 0;
}



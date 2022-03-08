#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter Any lowercase letter : ");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("The uppercase letter = %c",upper);


}

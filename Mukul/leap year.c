#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);

    if(year%400==0 || (year%100!=0 && year%4==0))
        printf("%d Leap Year",year);
    else
        printf("%d Not leap Year",year);


    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("enter the grade point=");
    scanf("%d",&a);
    if (a<=100 && a>=80)
    printf("grade point A+,GPA=5");
    else  if (a<=79 && a>=70)
    printf("grade point A-, GPA=4");
    else  if (a<=69 && a>=60)
    printf("grade point A ,GPA=3.5");
     else if (a<=59 && a>=50)
    printf("grade point B ,GPA=3");
      else if (a<=49 && a>=40)
    printf("grade point C, GPA=2.5");
     else if (a<=39 && a>=33)
    printf("grade point D ,sGPA=2");
    else
        printf("grade point fail");

    return 0;
}

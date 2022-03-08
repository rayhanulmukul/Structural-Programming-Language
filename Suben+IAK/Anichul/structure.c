#include<stdio.h>

struct student
{
    int number;
    char name[20];
    float salary;
};
void main()
{
    struct student r={2010976154,"Rayhanul",00.000001};
    printf("Student Details : ");
    printf("%d %s %f",r.number,r.name,r.salary);
    getch();

}

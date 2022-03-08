#include<stdio.h>

struct person
{

    int age;
    float salary;

};

int main()
{
    struct person person1,person2;
    person1.age=34;
    person2.age=35;
    person1.salary=500.675;
    person2.salary=600.343;


    printf("Age= %d\n",person1.age);
    printf("Age= %d\n",person2.age);
    printf("salary= %.2f\n",person1.salary);
    printf("salary= %.2f\n",person2.salary);



    getch();
}

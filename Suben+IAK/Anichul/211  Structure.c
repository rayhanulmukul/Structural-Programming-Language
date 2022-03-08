#include<stdio.h>


struct person
{

    int age;
    float salary;

};
int main()
{
     struct person person1,person2;
    scanf("%d",&person1.age);
    scanf("%d",&person2.age);
    scanf("%f",&person1.salary);
    scanf("%f",&person2.salary);

    prinf("person1: \n");
    printf("Age= %d\n",person1.age);
    printf("salary= %.2f\n",person1.salary);


    prinf("person2: \n");
    printf("Age= %d\n",person2.age);
    printf("salary= %.2f\n",person2.salary);

    getch();
}
